#pragma once

#include <boost/asio/any_io_executor.hpp>

#include "data_source_status_manager.hpp"

#include <launchdarkly/data_sources/data_source.hpp>

namespace launchdarkly::client_side::data_sources {

class NullDataSource : public ::launchdarkly::data_sources::IDataSource {
   public:
    explicit NullDataSource(boost::asio::any_io_executor exec,
                            DataSourceStatusManager& status_manager);
    void Start() override;
    void ShutdownAsync(std::function<void()>) override;

   private:
    DataSourceStatusManager& status_manager_;
    boost::asio::any_io_executor exec_;
};

}  // namespace launchdarkly::client_side::data_sources
