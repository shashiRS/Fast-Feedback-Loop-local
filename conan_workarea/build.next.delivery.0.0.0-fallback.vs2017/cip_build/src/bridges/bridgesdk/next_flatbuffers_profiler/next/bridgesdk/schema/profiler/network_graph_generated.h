// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_NETWORKGRAPH_PROFILER_H_
#define FLATBUFFERS_GENERATED_NETWORKGRAPH_PROFILER_H_

#include "flatbuffers/flatbuffers.h"

#include "next/bridgesdk/schema/profiler/basic_info_generated.h"

namespace profiler {

struct PortStatuses;
struct PortStatusesBuilder;
struct PortStatusesT;

struct DataTransferInputOutputNodes;
struct DataTransferInputOutputNodesBuilder;
struct DataTransferInputOutputNodesT;

struct Connection;
struct ConnectionBuilder;
struct ConnectionT;

struct Node;
struct NodeBuilder;
struct NodeT;

struct Edge;
struct EdgeBuilder;
struct EdgeT;

struct dataTransfer;
struct dataTransferBuilder;
struct dataTransferT;

struct PortStatusesT : public flatbuffers::NativeTable {
  typedef PortStatuses TableType;
  std::string name{};
  uint64_t dataSize = 0;
  bool isActive = false;
  std::string type{};
};

struct PortStatuses FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PortStatusesT NativeTableType;
  typedef PortStatusesBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_DATASIZE = 6,
    VT_ISACTIVE = 8,
    VT_TYPE = 10
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  uint64_t dataSize() const {
    return GetField<uint64_t>(VT_DATASIZE, 0);
  }
  bool isActive() const {
    return GetField<uint8_t>(VT_ISACTIVE, 0) != 0;
  }
  const flatbuffers::String *type() const {
    return GetPointer<const flatbuffers::String *>(VT_TYPE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<uint64_t>(verifier, VT_DATASIZE, 8) &&
           VerifyField<uint8_t>(verifier, VT_ISACTIVE, 1) &&
           VerifyOffset(verifier, VT_TYPE) &&
           verifier.VerifyString(type()) &&
           verifier.EndTable();
  }
  PortStatusesT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(PortStatusesT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<PortStatuses> Pack(flatbuffers::FlatBufferBuilder &_fbb, const PortStatusesT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct PortStatusesBuilder {
  typedef PortStatuses Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(PortStatuses::VT_NAME, name);
  }
  void add_dataSize(uint64_t dataSize) {
    fbb_.AddElement<uint64_t>(PortStatuses::VT_DATASIZE, dataSize, 0);
  }
  void add_isActive(bool isActive) {
    fbb_.AddElement<uint8_t>(PortStatuses::VT_ISACTIVE, static_cast<uint8_t>(isActive), 0);
  }
  void add_type(flatbuffers::Offset<flatbuffers::String> type) {
    fbb_.AddOffset(PortStatuses::VT_TYPE, type);
  }
  explicit PortStatusesBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PortStatuses> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PortStatuses>(end);
    return o;
  }
};

inline flatbuffers::Offset<PortStatuses> CreatePortStatuses(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    uint64_t dataSize = 0,
    bool isActive = false,
    flatbuffers::Offset<flatbuffers::String> type = 0) {
  PortStatusesBuilder builder_(_fbb);
  builder_.add_dataSize(dataSize);
  builder_.add_type(type);
  builder_.add_name(name);
  builder_.add_isActive(isActive);
  return builder_.Finish();
}

inline flatbuffers::Offset<PortStatuses> CreatePortStatusesDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    uint64_t dataSize = 0,
    bool isActive = false,
    const char *type = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto type__ = type ? _fbb.CreateString(type) : 0;
  return profiler::CreatePortStatuses(
      _fbb,
      name__,
      dataSize,
      isActive,
      type__);
}

flatbuffers::Offset<PortStatuses> CreatePortStatuses(flatbuffers::FlatBufferBuilder &_fbb, const PortStatusesT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct DataTransferInputOutputNodesT : public flatbuffers::NativeTable {
  typedef DataTransferInputOutputNodes TableType;
  std::vector<std::unique_ptr<profiler::PortStatusesT>> inputPorts{};
  std::vector<std::unique_ptr<profiler::PortStatusesT>> outputPorts{};
  DataTransferInputOutputNodesT() = default;
  DataTransferInputOutputNodesT(const DataTransferInputOutputNodesT &o);
  DataTransferInputOutputNodesT(DataTransferInputOutputNodesT&&) FLATBUFFERS_NOEXCEPT = default;
  DataTransferInputOutputNodesT &operator=(DataTransferInputOutputNodesT o) FLATBUFFERS_NOEXCEPT;
};

struct DataTransferInputOutputNodes FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef DataTransferInputOutputNodesT NativeTableType;
  typedef DataTransferInputOutputNodesBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_INPUTPORTS = 4,
    VT_OUTPUTPORTS = 6
  };
  const flatbuffers::Vector<flatbuffers::Offset<profiler::PortStatuses>> *inputPorts() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<profiler::PortStatuses>> *>(VT_INPUTPORTS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<profiler::PortStatuses>> *outputPorts() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<profiler::PortStatuses>> *>(VT_OUTPUTPORTS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_INPUTPORTS) &&
           verifier.VerifyVector(inputPorts()) &&
           verifier.VerifyVectorOfTables(inputPorts()) &&
           VerifyOffset(verifier, VT_OUTPUTPORTS) &&
           verifier.VerifyVector(outputPorts()) &&
           verifier.VerifyVectorOfTables(outputPorts()) &&
           verifier.EndTable();
  }
  DataTransferInputOutputNodesT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(DataTransferInputOutputNodesT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<DataTransferInputOutputNodes> Pack(flatbuffers::FlatBufferBuilder &_fbb, const DataTransferInputOutputNodesT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct DataTransferInputOutputNodesBuilder {
  typedef DataTransferInputOutputNodes Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_inputPorts(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<profiler::PortStatuses>>> inputPorts) {
    fbb_.AddOffset(DataTransferInputOutputNodes::VT_INPUTPORTS, inputPorts);
  }
  void add_outputPorts(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<profiler::PortStatuses>>> outputPorts) {
    fbb_.AddOffset(DataTransferInputOutputNodes::VT_OUTPUTPORTS, outputPorts);
  }
  explicit DataTransferInputOutputNodesBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<DataTransferInputOutputNodes> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<DataTransferInputOutputNodes>(end);
    return o;
  }
};

inline flatbuffers::Offset<DataTransferInputOutputNodes> CreateDataTransferInputOutputNodes(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<profiler::PortStatuses>>> inputPorts = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<profiler::PortStatuses>>> outputPorts = 0) {
  DataTransferInputOutputNodesBuilder builder_(_fbb);
  builder_.add_outputPorts(outputPorts);
  builder_.add_inputPorts(inputPorts);
  return builder_.Finish();
}

inline flatbuffers::Offset<DataTransferInputOutputNodes> CreateDataTransferInputOutputNodesDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<profiler::PortStatuses>> *inputPorts = nullptr,
    const std::vector<flatbuffers::Offset<profiler::PortStatuses>> *outputPorts = nullptr) {
  auto inputPorts__ = inputPorts ? _fbb.CreateVector<flatbuffers::Offset<profiler::PortStatuses>>(*inputPorts) : 0;
  auto outputPorts__ = outputPorts ? _fbb.CreateVector<flatbuffers::Offset<profiler::PortStatuses>>(*outputPorts) : 0;
  return profiler::CreateDataTransferInputOutputNodes(
      _fbb,
      inputPorts__,
      outputPorts__);
}

flatbuffers::Offset<DataTransferInputOutputNodes> CreateDataTransferInputOutputNodes(flatbuffers::FlatBufferBuilder &_fbb, const DataTransferInputOutputNodesT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct ConnectionT : public flatbuffers::NativeTable {
  typedef Connection TableType;
  std::string componentName{};
  std::string componentPort{};
};

struct Connection FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ConnectionT NativeTableType;
  typedef ConnectionBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_COMPONENTNAME = 4,
    VT_COMPONENTPORT = 6
  };
  const flatbuffers::String *componentName() const {
    return GetPointer<const flatbuffers::String *>(VT_COMPONENTNAME);
  }
  const flatbuffers::String *componentPort() const {
    return GetPointer<const flatbuffers::String *>(VT_COMPONENTPORT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_COMPONENTNAME) &&
           verifier.VerifyString(componentName()) &&
           VerifyOffset(verifier, VT_COMPONENTPORT) &&
           verifier.VerifyString(componentPort()) &&
           verifier.EndTable();
  }
  ConnectionT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ConnectionT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Connection> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ConnectionT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ConnectionBuilder {
  typedef Connection Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_componentName(flatbuffers::Offset<flatbuffers::String> componentName) {
    fbb_.AddOffset(Connection::VT_COMPONENTNAME, componentName);
  }
  void add_componentPort(flatbuffers::Offset<flatbuffers::String> componentPort) {
    fbb_.AddOffset(Connection::VT_COMPONENTPORT, componentPort);
  }
  explicit ConnectionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Connection> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Connection>(end);
    return o;
  }
};

inline flatbuffers::Offset<Connection> CreateConnection(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> componentName = 0,
    flatbuffers::Offset<flatbuffers::String> componentPort = 0) {
  ConnectionBuilder builder_(_fbb);
  builder_.add_componentPort(componentPort);
  builder_.add_componentName(componentName);
  return builder_.Finish();
}

inline flatbuffers::Offset<Connection> CreateConnectionDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *componentName = nullptr,
    const char *componentPort = nullptr) {
  auto componentName__ = componentName ? _fbb.CreateString(componentName) : 0;
  auto componentPort__ = componentPort ? _fbb.CreateString(componentPort) : 0;
  return profiler::CreateConnection(
      _fbb,
      componentName__,
      componentPort__);
}

flatbuffers::Offset<Connection> CreateConnection(flatbuffers::FlatBufferBuilder &_fbb, const ConnectionT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct NodeT : public flatbuffers::NativeTable {
  typedef Node TableType;
  std::unique_ptr<profiler::BasicT> basic{};
  std::unique_ptr<profiler::DataTransferInputOutputNodesT> DataTransfer{};
  NodeT() = default;
  NodeT(const NodeT &o);
  NodeT(NodeT&&) FLATBUFFERS_NOEXCEPT = default;
  NodeT &operator=(NodeT o) FLATBUFFERS_NOEXCEPT;
};

struct Node FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef NodeT NativeTableType;
  typedef NodeBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_BASIC = 4,
    VT_DATATRANSFER = 6
  };
  const profiler::Basic *basic() const {
    return GetPointer<const profiler::Basic *>(VT_BASIC);
  }
  const profiler::DataTransferInputOutputNodes *DataTransfer() const {
    return GetPointer<const profiler::DataTransferInputOutputNodes *>(VT_DATATRANSFER);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_BASIC) &&
           verifier.VerifyTable(basic()) &&
           VerifyOffset(verifier, VT_DATATRANSFER) &&
           verifier.VerifyTable(DataTransfer()) &&
           verifier.EndTable();
  }
  NodeT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(NodeT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Node> Pack(flatbuffers::FlatBufferBuilder &_fbb, const NodeT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct NodeBuilder {
  typedef Node Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_basic(flatbuffers::Offset<profiler::Basic> basic) {
    fbb_.AddOffset(Node::VT_BASIC, basic);
  }
  void add_DataTransfer(flatbuffers::Offset<profiler::DataTransferInputOutputNodes> DataTransfer) {
    fbb_.AddOffset(Node::VT_DATATRANSFER, DataTransfer);
  }
  explicit NodeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Node> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Node>(end);
    return o;
  }
};

inline flatbuffers::Offset<Node> CreateNode(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<profiler::Basic> basic = 0,
    flatbuffers::Offset<profiler::DataTransferInputOutputNodes> DataTransfer = 0) {
  NodeBuilder builder_(_fbb);
  builder_.add_DataTransfer(DataTransfer);
  builder_.add_basic(basic);
  return builder_.Finish();
}

flatbuffers::Offset<Node> CreateNode(flatbuffers::FlatBufferBuilder &_fbb, const NodeT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct EdgeT : public flatbuffers::NativeTable {
  typedef Edge TableType;
  std::string groupId{};
  std::unique_ptr<profiler::ConnectionT> from{};
  std::unique_ptr<profiler::ConnectionT> to{};
  std::string linkStatus{};
  uint64_t dataSize = 0;
  EdgeT() = default;
  EdgeT(const EdgeT &o);
  EdgeT(EdgeT&&) FLATBUFFERS_NOEXCEPT = default;
  EdgeT &operator=(EdgeT o) FLATBUFFERS_NOEXCEPT;
};

struct Edge FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef EdgeT NativeTableType;
  typedef EdgeBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_GROUPID = 4,
    VT_FROM = 6,
    VT_TO = 8,
    VT_LINKSTATUS = 10,
    VT_DATASIZE = 12
  };
  const flatbuffers::String *groupId() const {
    return GetPointer<const flatbuffers::String *>(VT_GROUPID);
  }
  const profiler::Connection *from() const {
    return GetPointer<const profiler::Connection *>(VT_FROM);
  }
  const profiler::Connection *to() const {
    return GetPointer<const profiler::Connection *>(VT_TO);
  }
  const flatbuffers::String *linkStatus() const {
    return GetPointer<const flatbuffers::String *>(VT_LINKSTATUS);
  }
  uint64_t dataSize() const {
    return GetField<uint64_t>(VT_DATASIZE, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_GROUPID) &&
           verifier.VerifyString(groupId()) &&
           VerifyOffset(verifier, VT_FROM) &&
           verifier.VerifyTable(from()) &&
           VerifyOffset(verifier, VT_TO) &&
           verifier.VerifyTable(to()) &&
           VerifyOffset(verifier, VT_LINKSTATUS) &&
           verifier.VerifyString(linkStatus()) &&
           VerifyField<uint64_t>(verifier, VT_DATASIZE, 8) &&
           verifier.EndTable();
  }
  EdgeT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(EdgeT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Edge> Pack(flatbuffers::FlatBufferBuilder &_fbb, const EdgeT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct EdgeBuilder {
  typedef Edge Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_groupId(flatbuffers::Offset<flatbuffers::String> groupId) {
    fbb_.AddOffset(Edge::VT_GROUPID, groupId);
  }
  void add_from(flatbuffers::Offset<profiler::Connection> from) {
    fbb_.AddOffset(Edge::VT_FROM, from);
  }
  void add_to(flatbuffers::Offset<profiler::Connection> to) {
    fbb_.AddOffset(Edge::VT_TO, to);
  }
  void add_linkStatus(flatbuffers::Offset<flatbuffers::String> linkStatus) {
    fbb_.AddOffset(Edge::VT_LINKSTATUS, linkStatus);
  }
  void add_dataSize(uint64_t dataSize) {
    fbb_.AddElement<uint64_t>(Edge::VT_DATASIZE, dataSize, 0);
  }
  explicit EdgeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Edge> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Edge>(end);
    return o;
  }
};

inline flatbuffers::Offset<Edge> CreateEdge(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> groupId = 0,
    flatbuffers::Offset<profiler::Connection> from = 0,
    flatbuffers::Offset<profiler::Connection> to = 0,
    flatbuffers::Offset<flatbuffers::String> linkStatus = 0,
    uint64_t dataSize = 0) {
  EdgeBuilder builder_(_fbb);
  builder_.add_dataSize(dataSize);
  builder_.add_linkStatus(linkStatus);
  builder_.add_to(to);
  builder_.add_from(from);
  builder_.add_groupId(groupId);
  return builder_.Finish();
}

inline flatbuffers::Offset<Edge> CreateEdgeDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *groupId = nullptr,
    flatbuffers::Offset<profiler::Connection> from = 0,
    flatbuffers::Offset<profiler::Connection> to = 0,
    const char *linkStatus = nullptr,
    uint64_t dataSize = 0) {
  auto groupId__ = groupId ? _fbb.CreateString(groupId) : 0;
  auto linkStatus__ = linkStatus ? _fbb.CreateString(linkStatus) : 0;
  return profiler::CreateEdge(
      _fbb,
      groupId__,
      from,
      to,
      linkStatus__,
      dataSize);
}

flatbuffers::Offset<Edge> CreateEdge(flatbuffers::FlatBufferBuilder &_fbb, const EdgeT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct dataTransferT : public flatbuffers::NativeTable {
  typedef dataTransfer TableType;
  std::vector<std::unique_ptr<profiler::NodeT>> nodes{};
  std::vector<std::unique_ptr<profiler::EdgeT>> edges{};
  dataTransferT() = default;
  dataTransferT(const dataTransferT &o);
  dataTransferT(dataTransferT&&) FLATBUFFERS_NOEXCEPT = default;
  dataTransferT &operator=(dataTransferT o) FLATBUFFERS_NOEXCEPT;
};

struct dataTransfer FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef dataTransferT NativeTableType;
  typedef dataTransferBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NODES = 4,
    VT_EDGES = 6
  };
  const flatbuffers::Vector<flatbuffers::Offset<profiler::Node>> *nodes() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<profiler::Node>> *>(VT_NODES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<profiler::Edge>> *edges() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<profiler::Edge>> *>(VT_EDGES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NODES) &&
           verifier.VerifyVector(nodes()) &&
           verifier.VerifyVectorOfTables(nodes()) &&
           VerifyOffset(verifier, VT_EDGES) &&
           verifier.VerifyVector(edges()) &&
           verifier.VerifyVectorOfTables(edges()) &&
           verifier.EndTable();
  }
  dataTransferT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(dataTransferT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<dataTransfer> Pack(flatbuffers::FlatBufferBuilder &_fbb, const dataTransferT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct dataTransferBuilder {
  typedef dataTransfer Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_nodes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<profiler::Node>>> nodes) {
    fbb_.AddOffset(dataTransfer::VT_NODES, nodes);
  }
  void add_edges(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<profiler::Edge>>> edges) {
    fbb_.AddOffset(dataTransfer::VT_EDGES, edges);
  }
  explicit dataTransferBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<dataTransfer> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<dataTransfer>(end);
    return o;
  }
};

inline flatbuffers::Offset<dataTransfer> CreatedataTransfer(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<profiler::Node>>> nodes = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<profiler::Edge>>> edges = 0) {
  dataTransferBuilder builder_(_fbb);
  builder_.add_edges(edges);
  builder_.add_nodes(nodes);
  return builder_.Finish();
}

inline flatbuffers::Offset<dataTransfer> CreatedataTransferDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<profiler::Node>> *nodes = nullptr,
    const std::vector<flatbuffers::Offset<profiler::Edge>> *edges = nullptr) {
  auto nodes__ = nodes ? _fbb.CreateVector<flatbuffers::Offset<profiler::Node>>(*nodes) : 0;
  auto edges__ = edges ? _fbb.CreateVector<flatbuffers::Offset<profiler::Edge>>(*edges) : 0;
  return profiler::CreatedataTransfer(
      _fbb,
      nodes__,
      edges__);
}

flatbuffers::Offset<dataTransfer> CreatedataTransfer(flatbuffers::FlatBufferBuilder &_fbb, const dataTransferT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline PortStatusesT *PortStatuses::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<PortStatusesT>(new PortStatusesT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void PortStatuses::UnPackTo(PortStatusesT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = name(); if (_e) _o->name = _e->str(); }
  { auto _e = dataSize(); _o->dataSize = _e; }
  { auto _e = isActive(); _o->isActive = _e; }
  { auto _e = type(); if (_e) _o->type = _e->str(); }
}

inline flatbuffers::Offset<PortStatuses> PortStatuses::Pack(flatbuffers::FlatBufferBuilder &_fbb, const PortStatusesT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreatePortStatuses(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<PortStatuses> CreatePortStatuses(flatbuffers::FlatBufferBuilder &_fbb, const PortStatusesT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const PortStatusesT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _name = _o->name.empty() ? 0 : _fbb.CreateString(_o->name);
  auto _dataSize = _o->dataSize;
  auto _isActive = _o->isActive;
  auto _type = _o->type.empty() ? 0 : _fbb.CreateString(_o->type);
  return profiler::CreatePortStatuses(
      _fbb,
      _name,
      _dataSize,
      _isActive,
      _type);
}

inline DataTransferInputOutputNodesT::DataTransferInputOutputNodesT(const DataTransferInputOutputNodesT &o) {
  inputPorts.reserve(o.inputPorts.size());
  for (const auto &v : o.inputPorts) { inputPorts.emplace_back((v) ? new profiler::PortStatusesT(*v) : nullptr); }
  outputPorts.reserve(o.outputPorts.size());
  for (const auto &v : o.outputPorts) { outputPorts.emplace_back((v) ? new profiler::PortStatusesT(*v) : nullptr); }
}

inline DataTransferInputOutputNodesT &DataTransferInputOutputNodesT::operator=(DataTransferInputOutputNodesT o) FLATBUFFERS_NOEXCEPT {
  std::swap(inputPorts, o.inputPorts);
  std::swap(outputPorts, o.outputPorts);
  return *this;
}

inline DataTransferInputOutputNodesT *DataTransferInputOutputNodes::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<DataTransferInputOutputNodesT>(new DataTransferInputOutputNodesT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void DataTransferInputOutputNodes::UnPackTo(DataTransferInputOutputNodesT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = inputPorts(); if (_e) { _o->inputPorts.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { if(_o->inputPorts[_i]) { _e->Get(_i)->UnPackTo(_o->inputPorts[_i].get(), _resolver); } else { _o->inputPorts[_i] = std::unique_ptr<profiler::PortStatusesT>(_e->Get(_i)->UnPack(_resolver)); }; } } }
  { auto _e = outputPorts(); if (_e) { _o->outputPorts.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { if(_o->outputPorts[_i]) { _e->Get(_i)->UnPackTo(_o->outputPorts[_i].get(), _resolver); } else { _o->outputPorts[_i] = std::unique_ptr<profiler::PortStatusesT>(_e->Get(_i)->UnPack(_resolver)); }; } } }
}

inline flatbuffers::Offset<DataTransferInputOutputNodes> DataTransferInputOutputNodes::Pack(flatbuffers::FlatBufferBuilder &_fbb, const DataTransferInputOutputNodesT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateDataTransferInputOutputNodes(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<DataTransferInputOutputNodes> CreateDataTransferInputOutputNodes(flatbuffers::FlatBufferBuilder &_fbb, const DataTransferInputOutputNodesT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const DataTransferInputOutputNodesT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _inputPorts = _o->inputPorts.size() ? _fbb.CreateVector<flatbuffers::Offset<profiler::PortStatuses>> (_o->inputPorts.size(), [](size_t i, _VectorArgs *__va) { return CreatePortStatuses(*__va->__fbb, __va->__o->inputPorts[i].get(), __va->__rehasher); }, &_va ) : 0;
  auto _outputPorts = _o->outputPorts.size() ? _fbb.CreateVector<flatbuffers::Offset<profiler::PortStatuses>> (_o->outputPorts.size(), [](size_t i, _VectorArgs *__va) { return CreatePortStatuses(*__va->__fbb, __va->__o->outputPorts[i].get(), __va->__rehasher); }, &_va ) : 0;
  return profiler::CreateDataTransferInputOutputNodes(
      _fbb,
      _inputPorts,
      _outputPorts);
}

inline ConnectionT *Connection::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<ConnectionT>(new ConnectionT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Connection::UnPackTo(ConnectionT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = componentName(); if (_e) _o->componentName = _e->str(); }
  { auto _e = componentPort(); if (_e) _o->componentPort = _e->str(); }
}

inline flatbuffers::Offset<Connection> Connection::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ConnectionT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateConnection(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Connection> CreateConnection(flatbuffers::FlatBufferBuilder &_fbb, const ConnectionT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ConnectionT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _componentName = _o->componentName.empty() ? 0 : _fbb.CreateString(_o->componentName);
  auto _componentPort = _o->componentPort.empty() ? 0 : _fbb.CreateString(_o->componentPort);
  return profiler::CreateConnection(
      _fbb,
      _componentName,
      _componentPort);
}

inline NodeT::NodeT(const NodeT &o)
      : basic((o.basic) ? new profiler::BasicT(*o.basic) : nullptr),
        DataTransfer((o.DataTransfer) ? new profiler::DataTransferInputOutputNodesT(*o.DataTransfer) : nullptr) {
}

inline NodeT &NodeT::operator=(NodeT o) FLATBUFFERS_NOEXCEPT {
  std::swap(basic, o.basic);
  std::swap(DataTransfer, o.DataTransfer);
  return *this;
}

inline NodeT *Node::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<NodeT>(new NodeT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Node::UnPackTo(NodeT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = basic(); if (_e) { if(_o->basic) { _e->UnPackTo(_o->basic.get(), _resolver); } else { _o->basic = std::unique_ptr<profiler::BasicT>(_e->UnPack(_resolver)); } } }
  { auto _e = DataTransfer(); if (_e) { if(_o->DataTransfer) { _e->UnPackTo(_o->DataTransfer.get(), _resolver); } else { _o->DataTransfer = std::unique_ptr<profiler::DataTransferInputOutputNodesT>(_e->UnPack(_resolver)); } } }
}

inline flatbuffers::Offset<Node> Node::Pack(flatbuffers::FlatBufferBuilder &_fbb, const NodeT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateNode(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Node> CreateNode(flatbuffers::FlatBufferBuilder &_fbb, const NodeT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const NodeT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _basic = _o->basic ? CreateBasic(_fbb, _o->basic.get(), _rehasher) : 0;
  auto _DataTransfer = _o->DataTransfer ? CreateDataTransferInputOutputNodes(_fbb, _o->DataTransfer.get(), _rehasher) : 0;
  return profiler::CreateNode(
      _fbb,
      _basic,
      _DataTransfer);
}

inline EdgeT::EdgeT(const EdgeT &o)
      : groupId(o.groupId),
        from((o.from) ? new profiler::ConnectionT(*o.from) : nullptr),
        to((o.to) ? new profiler::ConnectionT(*o.to) : nullptr),
        linkStatus(o.linkStatus),
        dataSize(o.dataSize) {
}

inline EdgeT &EdgeT::operator=(EdgeT o) FLATBUFFERS_NOEXCEPT {
  std::swap(groupId, o.groupId);
  std::swap(from, o.from);
  std::swap(to, o.to);
  std::swap(linkStatus, o.linkStatus);
  std::swap(dataSize, o.dataSize);
  return *this;
}

inline EdgeT *Edge::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<EdgeT>(new EdgeT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Edge::UnPackTo(EdgeT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = groupId(); if (_e) _o->groupId = _e->str(); }
  { auto _e = from(); if (_e) { if(_o->from) { _e->UnPackTo(_o->from.get(), _resolver); } else { _o->from = std::unique_ptr<profiler::ConnectionT>(_e->UnPack(_resolver)); } } }
  { auto _e = to(); if (_e) { if(_o->to) { _e->UnPackTo(_o->to.get(), _resolver); } else { _o->to = std::unique_ptr<profiler::ConnectionT>(_e->UnPack(_resolver)); } } }
  { auto _e = linkStatus(); if (_e) _o->linkStatus = _e->str(); }
  { auto _e = dataSize(); _o->dataSize = _e; }
}

inline flatbuffers::Offset<Edge> Edge::Pack(flatbuffers::FlatBufferBuilder &_fbb, const EdgeT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateEdge(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Edge> CreateEdge(flatbuffers::FlatBufferBuilder &_fbb, const EdgeT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const EdgeT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _groupId = _o->groupId.empty() ? 0 : _fbb.CreateString(_o->groupId);
  auto _from = _o->from ? CreateConnection(_fbb, _o->from.get(), _rehasher) : 0;
  auto _to = _o->to ? CreateConnection(_fbb, _o->to.get(), _rehasher) : 0;
  auto _linkStatus = _o->linkStatus.empty() ? 0 : _fbb.CreateString(_o->linkStatus);
  auto _dataSize = _o->dataSize;
  return profiler::CreateEdge(
      _fbb,
      _groupId,
      _from,
      _to,
      _linkStatus,
      _dataSize);
}

inline dataTransferT::dataTransferT(const dataTransferT &o) {
  nodes.reserve(o.nodes.size());
  for (const auto &v : o.nodes) { nodes.emplace_back((v) ? new profiler::NodeT(*v) : nullptr); }
  edges.reserve(o.edges.size());
  for (const auto &v : o.edges) { edges.emplace_back((v) ? new profiler::EdgeT(*v) : nullptr); }
}

inline dataTransferT &dataTransferT::operator=(dataTransferT o) FLATBUFFERS_NOEXCEPT {
  std::swap(nodes, o.nodes);
  std::swap(edges, o.edges);
  return *this;
}

inline dataTransferT *dataTransfer::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<dataTransferT>(new dataTransferT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void dataTransfer::UnPackTo(dataTransferT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = nodes(); if (_e) { _o->nodes.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { if(_o->nodes[_i]) { _e->Get(_i)->UnPackTo(_o->nodes[_i].get(), _resolver); } else { _o->nodes[_i] = std::unique_ptr<profiler::NodeT>(_e->Get(_i)->UnPack(_resolver)); }; } } }
  { auto _e = edges(); if (_e) { _o->edges.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { if(_o->edges[_i]) { _e->Get(_i)->UnPackTo(_o->edges[_i].get(), _resolver); } else { _o->edges[_i] = std::unique_ptr<profiler::EdgeT>(_e->Get(_i)->UnPack(_resolver)); }; } } }
}

inline flatbuffers::Offset<dataTransfer> dataTransfer::Pack(flatbuffers::FlatBufferBuilder &_fbb, const dataTransferT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreatedataTransfer(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<dataTransfer> CreatedataTransfer(flatbuffers::FlatBufferBuilder &_fbb, const dataTransferT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const dataTransferT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _nodes = _o->nodes.size() ? _fbb.CreateVector<flatbuffers::Offset<profiler::Node>> (_o->nodes.size(), [](size_t i, _VectorArgs *__va) { return CreateNode(*__va->__fbb, __va->__o->nodes[i].get(), __va->__rehasher); }, &_va ) : 0;
  auto _edges = _o->edges.size() ? _fbb.CreateVector<flatbuffers::Offset<profiler::Edge>> (_o->edges.size(), [](size_t i, _VectorArgs *__va) { return CreateEdge(*__va->__fbb, __va->__o->edges[i].get(), __va->__rehasher); }, &_va ) : 0;
  return profiler::CreatedataTransfer(
      _fbb,
      _nodes,
      _edges);
}

inline const profiler::dataTransfer *GetdataTransfer(const void *buf) {
  return flatbuffers::GetRoot<profiler::dataTransfer>(buf);
}

inline const profiler::dataTransfer *GetSizePrefixeddataTransfer(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<profiler::dataTransfer>(buf);
}

inline const char *dataTransferIdentifier() {
  return "NG01";
}

inline bool dataTransferBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, dataTransferIdentifier());
}

inline bool SizePrefixeddataTransferBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, dataTransferIdentifier(), true);
}

inline bool VerifydataTransferBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<profiler::dataTransfer>(dataTransferIdentifier());
}

inline bool VerifySizePrefixeddataTransferBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<profiler::dataTransfer>(dataTransferIdentifier());
}

inline void FinishdataTransferBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<profiler::dataTransfer> root) {
  fbb.Finish(root, dataTransferIdentifier());
}

inline void FinishSizePrefixeddataTransferBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<profiler::dataTransfer> root) {
  fbb.FinishSizePrefixed(root, dataTransferIdentifier());
}

inline std::unique_ptr<profiler::dataTransferT> UnPackdataTransfer(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<profiler::dataTransferT>(GetdataTransfer(buf)->UnPack(res));
}

inline std::unique_ptr<profiler::dataTransferT> UnPackSizePrefixeddataTransfer(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<profiler::dataTransferT>(GetSizePrefixeddataTransfer(buf)->UnPack(res));
}

}  // namespace profiler

#endif  // FLATBUFFERS_GENERATED_NETWORKGRAPH_PROFILER_H_
