package com.facebook.react.animated;

import com.facebook.react.animated.NativeAnimatedModule;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableMapBuilder;
import com.facebook.react.bridge.WritableMap;
import fo.n;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;

@Metadata(d1 = {"\u0000\u001b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000*\u0001\u0000\b\n\u0018\u00002\u00060\u0001R\u00020\u0002J\u0010\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0016¨\u0006\u0007"}, d2 = {"com/facebook/react/animated/NativeAnimatedModule$queueAndExecuteBatchedOperations$1", "Lcom/facebook/react/animated/NativeAnimatedModule$UIThreadOperation;", "Lcom/facebook/react/animated/NativeAnimatedModule;", "execute", "", "animatedNodesManager", "Lcom/facebook/react/animated/NativeAnimatedNodesManager;", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nNativeAnimatedModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NativeAnimatedModule.kt\ncom/facebook/react/animated/NativeAnimatedModule$queueAndExecuteBatchedOperations$1\n+ 2 ReadableMapBuilder.kt\ncom/facebook/react/bridge/ReadableMapBuilderKt\n*L\n1#1,1041:1\n30#2,3:1042\n*S KotlinDebug\n*F\n+ 1 NativeAnimatedModule.kt\ncom/facebook/react/animated/NativeAnimatedModule$queueAndExecuteBatchedOperations$1\n*L\n932#1:1042,3\n*E\n"})
/* loaded from: classes3.dex */
public final class NativeAnimatedModule$queueAndExecuteBatchedOperations$1 extends NativeAnimatedModule.UIThreadOperation {
    final /* synthetic */ int $opBufferSize;
    final /* synthetic */ ReadableArray $opsAndArgs;
    final /* synthetic */ NativeAnimatedModule this$0;

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[NativeAnimatedModule.BatchExecutionOpCodes.values().length];
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_CREATE_ANIMATED_NODE.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_UPDATE_ANIMATED_NODE_CONFIG.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_GET_VALUE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_START_LISTENING_TO_ANIMATED_NODE_VALUE.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_STOP_LISTENING_TO_ANIMATED_NODE_VALUE.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_CONNECT_ANIMATED_NODES.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_DISCONNECT_ANIMATED_NODES.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_START_ANIMATING_NODE.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_STOP_ANIMATION.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_SET_ANIMATED_NODE_VALUE.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_SET_ANIMATED_NODE_OFFSET.ordinal()] = 11;
            } catch (NoSuchFieldError unused11) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_FLATTEN_ANIMATED_NODE_OFFSET.ordinal()] = 12;
            } catch (NoSuchFieldError unused12) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_EXTRACT_ANIMATED_NODE_OFFSET.ordinal()] = 13;
            } catch (NoSuchFieldError unused13) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_CONNECT_ANIMATED_NODE_TO_VIEW.ordinal()] = 14;
            } catch (NoSuchFieldError unused14) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_DISCONNECT_ANIMATED_NODE_FROM_VIEW.ordinal()] = 15;
            } catch (NoSuchFieldError unused15) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_RESTORE_DEFAULT_VALUES.ordinal()] = 16;
            } catch (NoSuchFieldError unused16) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_DROP_ANIMATED_NODE.ordinal()] = 17;
            } catch (NoSuchFieldError unused17) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_ADD_ANIMATED_EVENT_TO_VIEW.ordinal()] = 18;
            } catch (NoSuchFieldError unused18) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_REMOVE_ANIMATED_EVENT_FROM_VIEW.ordinal()] = 19;
            } catch (NoSuchFieldError unused19) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_ADD_LISTENER.ordinal()] = 20;
            } catch (NoSuchFieldError unused20) {
            }
            try {
                iArr[NativeAnimatedModule.BatchExecutionOpCodes.OP_CODE_REMOVE_LISTENERS.ordinal()] = 21;
            } catch (NoSuchFieldError unused21) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public NativeAnimatedModule$queueAndExecuteBatchedOperations$1(NativeAnimatedModule nativeAnimatedModule, int i5, ReadableArray readableArray) {
        super();
        this.this$0 = nativeAnimatedModule;
        this.$opBufferSize = i5;
        this.$opsAndArgs = readableArray;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void execute$lambda$1(NativeAnimatedModule nativeAnimatedModule, int i5, double d6, double d7) {
        ReactApplicationContext reactApplicationContextIfActiveOrWarn;
        WritableMap createMap = Arguments.createMap();
        ReadableMapBuilder readableMapBuilder = new ReadableMapBuilder(createMap);
        readableMapBuilder.put("tag", i5);
        readableMapBuilder.put("value", d6);
        readableMapBuilder.put("offset", d7);
        reactApplicationContextIfActiveOrWarn = nativeAnimatedModule.getReactApplicationContextIfActiveOrWarn();
        if (reactApplicationContextIfActiveOrWarn != null) {
            reactApplicationContextIfActiveOrWarn.emitDeviceEvent("onAnimatedValueUpdate", createMap);
        }
    }

    @Override // com.facebook.react.animated.NativeAnimatedModule.UIThreadOperation
    public void execute(NativeAnimatedNodesManager animatedNodesManager) {
        Intrinsics.checkNotNullParameter(animatedNodesManager, "animatedNodesManager");
        this.this$0.getReactApplicationContextIfActiveOrWarn();
        int i5 = 0;
        while (i5 < this.$opBufferSize) {
            int i6 = i5 + 1;
            switch (WhenMappings.$EnumSwitchMapping$0[NativeAnimatedModule.BatchExecutionOpCodes.INSTANCE.fromId(this.$opsAndArgs.getInt(i5)).ordinal()]) {
                case 1:
                    int i10 = i5 + 2;
                    int i11 = this.$opsAndArgs.getInt(i6);
                    i5 += 3;
                    ReadableMap map = this.$opsAndArgs.getMap(i10);
                    if (map == null) {
                        throw new IllegalStateException("Required value was null.");
                    }
                    animatedNodesManager.createAnimatedNode(i11, map);
                    break;
                case 2:
                    int i12 = i5 + 2;
                    int i13 = this.$opsAndArgs.getInt(i6);
                    i5 += 3;
                    ReadableMap map2 = this.$opsAndArgs.getMap(i12);
                    if (map2 == null) {
                        throw new IllegalStateException("Required value was null.");
                    }
                    animatedNodesManager.updateAnimatedNodeConfig(i13, map2);
                    break;
                case 3:
                    i5 += 2;
                    animatedNodesManager.getValue(this.$opsAndArgs.getInt(i6), null);
                    break;
                case 4:
                    i5 += 2;
                    int i14 = this.$opsAndArgs.getInt(i6);
                    animatedNodesManager.startListeningToAnimatedNodeValue(i14, new a(this.this$0, i14, 1));
                    break;
                case 5:
                    i5 += 2;
                    animatedNodesManager.stopListeningToAnimatedNodeValue(this.$opsAndArgs.getInt(i6));
                    break;
                case 6:
                    int i15 = i5 + 2;
                    i5 += 3;
                    animatedNodesManager.connectAnimatedNodes(this.$opsAndArgs.getInt(i6), this.$opsAndArgs.getInt(i15));
                    break;
                case 7:
                    int i16 = i5 + 2;
                    i5 += 3;
                    animatedNodesManager.disconnectAnimatedNodes(this.$opsAndArgs.getInt(i6), this.$opsAndArgs.getInt(i16));
                    break;
                case 8:
                    int i17 = this.$opsAndArgs.getInt(i6);
                    int i18 = i5 + 3;
                    int i19 = this.$opsAndArgs.getInt(i5 + 2);
                    i5 += 4;
                    ReadableMap map3 = this.$opsAndArgs.getMap(i18);
                    if (map3 == null) {
                        throw new IllegalStateException("Required value was null.");
                    }
                    animatedNodesManager.startAnimatingNode(i17, i19, map3, null);
                    break;
                case 9:
                    i5 += 2;
                    animatedNodesManager.stopAnimation(this.$opsAndArgs.getInt(i6));
                    break;
                case 10:
                    int i20 = i5 + 2;
                    i5 += 3;
                    animatedNodesManager.setAnimatedNodeValue(this.$opsAndArgs.getInt(i6), this.$opsAndArgs.getDouble(i20));
                    break;
                case 11:
                    int i21 = i5 + 2;
                    i5 += 3;
                    animatedNodesManager.setAnimatedNodeOffset(this.$opsAndArgs.getInt(i6), this.$opsAndArgs.getDouble(i21));
                    break;
                case 12:
                    i5 += 2;
                    animatedNodesManager.flattenAnimatedNodeOffset(this.$opsAndArgs.getInt(i6));
                    break;
                case 13:
                    i5 += 2;
                    animatedNodesManager.extractAnimatedNodeOffset(this.$opsAndArgs.getInt(i6));
                    break;
                case 14:
                    int i22 = i5 + 2;
                    i5 += 3;
                    animatedNodesManager.connectAnimatedNodeToView(this.$opsAndArgs.getInt(i6), this.$opsAndArgs.getInt(i22));
                    break;
                case 15:
                    int i23 = i5 + 2;
                    i5 += 3;
                    animatedNodesManager.disconnectAnimatedNodeFromView(this.$opsAndArgs.getInt(i6), this.$opsAndArgs.getInt(i23));
                    break;
                case 16:
                    i5 += 2;
                    animatedNodesManager.restoreDefaultValues(this.$opsAndArgs.getInt(i6));
                    break;
                case 17:
                    i5 += 2;
                    animatedNodesManager.dropAnimatedNode(this.$opsAndArgs.getInt(i6));
                    break;
                case 18:
                    int i24 = this.$opsAndArgs.getInt(i6);
                    int i25 = i5 + 3;
                    String string = this.$opsAndArgs.getString(i5 + 2);
                    if (string == null) {
                        throw new IllegalStateException("Required value was null.");
                    }
                    i5 += 4;
                    ReadableMap map4 = this.$opsAndArgs.getMap(i25);
                    if (map4 == null) {
                        throw new IllegalStateException("Required value was null.");
                    }
                    animatedNodesManager.addAnimatedEventToView(i24, string, map4);
                    break;
                case 19:
                    int i26 = this.$opsAndArgs.getInt(i6);
                    int i27 = i5 + 3;
                    String string2 = this.$opsAndArgs.getString(i5 + 2);
                    if (string2 == null) {
                        throw new IllegalStateException("Required value was null.");
                    }
                    i5 += 4;
                    animatedNodesManager.removeAnimatedEventFromView(i26, string2, this.$opsAndArgs.getInt(i27));
                    break;
                case 20:
                case 21:
                    i5 += 2;
                    break;
                default:
                    throw new n();
            }
        }
    }
}
