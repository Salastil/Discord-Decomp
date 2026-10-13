package com.facebook.react.fabric.mounting.mountitems;

import a3.e;
import android.os.Trace;
import com.facebook.imagepipeline.nativecode.c;
import com.facebook.react.bridge.ReactMarker;
import com.facebook.react.bridge.ReactMarkerConstants;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.fabric.FabricUIManager;
import com.facebook.react.fabric.events.EventEmitterWrapper;
import com.facebook.react.fabric.mounting.MountingManager;
import com.facebook.react.fabric.mounting.SurfaceMountingManager;
import com.facebook.react.internal.featureflags.ReactNativeFeatureFlags;
import com.facebook.react.uimanager.StateWrapper;
import d9.a;
import java.util.Arrays;
import java.util.Locale;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0015\n\u0000\n\u0002\u0010\u0011\n\u0002\u0010\u0000\n\u0002\b\u0007\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\b\u0000\u0018\u0000 \u001b2\u00020\u0001:\u0001\u001bB/\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u000e\u0010\u0006\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0007\u0012\u0006\u0010\t\u001a\u00020\u0003¢\u0006\u0004\b\n\u0010\u000bJ\u0010\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0012H\u0002J\b\u0010\u0013\u001a\u00020\u0010H\u0002J\u0010\u0010\u0014\u001a\u00020\u00102\u0006\u0010\u0015\u001a\u00020\u0016H\u0016J\b\u0010\u0017\u001a\u00020\u0003H\u0016J\b\u0010\u0018\u001a\u00020\u0019H\u0016J\b\u0010\u001a\u001a\u00020\u0012H\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0018\u0010\u0006\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0007X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\fR\u000e\u0010\t\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001c"}, d2 = {"Lcom/facebook/react/fabric/mounting/mountitems/IntBufferBatchMountItem;", "Lcom/facebook/react/fabric/mounting/mountitems/BatchMountItem;", "surfaceId", "", "intBuffer", "", "objBuffer", "", "", "commitNumber", "<init>", "(I[I[Ljava/lang/Object;I)V", "[Ljava/lang/Object;", "intBufferLen", "objBufferLen", "beginMarkers", "", "reason", "", "endMarkers", "execute", "mountingManager", "Lcom/facebook/react/fabric/mounting/MountingManager;", "getSurfaceId", "isBatchEmpty", "", "toString", "Companion", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class IntBufferBatchMountItem implements BatchMountItem {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    public static final int INSTRUCTION_CREATE = 2;
    public static final int INSTRUCTION_DELETE = 4;
    public static final int INSTRUCTION_FLAG_MULTIPLE = 1;
    public static final int INSTRUCTION_INSERT = 8;
    public static final int INSTRUCTION_REMOVE = 16;
    public static final int INSTRUCTION_UPDATE_EVENT_EMITTER = 256;
    public static final int INSTRUCTION_UPDATE_LAYOUT = 128;
    public static final int INSTRUCTION_UPDATE_OVERFLOW_INSET = 1024;
    public static final int INSTRUCTION_UPDATE_PADDING = 512;
    public static final int INSTRUCTION_UPDATE_PROPS = 32;
    public static final int INSTRUCTION_UPDATE_STATE = 64;
    private final int commitNumber;

    @NotNull
    private final int[] intBuffer;
    private final int intBufferLen;

    @NotNull
    private final Object[] objBuffer;
    private final int objBufferLen;
    private final int surfaceId;

    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u000b\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0005H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u0013"}, d2 = {"Lcom/facebook/react/fabric/mounting/mountitems/IntBufferBatchMountItem$Companion;", "", "<init>", "()V", "INSTRUCTION_FLAG_MULTIPLE", "", "INSTRUCTION_CREATE", "INSTRUCTION_DELETE", "INSTRUCTION_INSERT", "INSTRUCTION_REMOVE", "INSTRUCTION_UPDATE_PROPS", "INSTRUCTION_UPDATE_STATE", "INSTRUCTION_UPDATE_LAYOUT", "INSTRUCTION_UPDATE_EVENT_EMITTER", "INSTRUCTION_UPDATE_PADDING", "INSTRUCTION_UPDATE_OVERFLOW_INSET", "nameForInstructionString", "", "type", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final String nameForInstructionString(int type) {
            return type != 2 ? type != 4 ? type != 8 ? type != 16 ? type != 32 ? type != 64 ? type != 128 ? type != 256 ? type != 512 ? type != 1024 ? "UNKNOWN" : "UPDATE_OVERFLOW_INSET" : "UPDATE_PADDING" : "UPDATE_EVENT_EMITTER" : "UPDATE_LAYOUT" : "UPDATE_STATE" : "UPDATE_PROPS" : "REMOVE" : "INSERT" : "DELETE" : "CREATE";
        }

        private Companion() {
        }
    }

    public IntBufferBatchMountItem(int i5, @NotNull int[] intBuffer, @NotNull Object[] objBuffer, int i6) {
        Intrinsics.checkNotNullParameter(intBuffer, "intBuffer");
        Intrinsics.checkNotNullParameter(objBuffer, "objBuffer");
        this.surfaceId = i5;
        this.intBuffer = intBuffer;
        this.objBuffer = objBuffer;
        this.commitNumber = i6;
        this.intBufferLen = intBuffer.length;
        this.objBufferLen = objBuffer.length;
    }

    private final void beginMarkers(String reason) {
        a.e("IntBufferBatchMountItem::" + reason);
        int i5 = this.commitNumber;
        if (i5 > 0) {
            ReactMarker.logFabricMarker(ReactMarkerConstants.FABRIC_BATCH_EXECUTION_START, null, i5);
        }
    }

    private final void endMarkers() {
        int i5 = this.commitNumber;
        if (i5 > 0) {
            ReactMarker.logFabricMarker(ReactMarkerConstants.FABRIC_BATCH_EXECUTION_END, null, i5);
        }
        Trace.endSection();
    }

    @Override // com.facebook.react.fabric.mounting.mountitems.MountItem
    public void execute(@NotNull MountingManager mountingManager) {
        int i5;
        int i6;
        Intrinsics.checkNotNullParameter(mountingManager, "mountingManager");
        SurfaceMountingManager surfaceManager = mountingManager.getSurfaceManager(this.surfaceId);
        if (surfaceManager == null) {
            p8.a.i("IntBufferBatchMountItem", "Skipping batch of MountItems; no SurfaceMountingManager found for [%d].", Integer.valueOf(this.surfaceId));
            return;
        }
        if (surfaceManager.getIsStopped()) {
            p8.a.i("IntBufferBatchMountItem", "Skipping batch of MountItems; was stopped [%d].", Integer.valueOf(this.surfaceId));
            return;
        }
        if (ReactNativeFeatureFlags.enableFabricLogs()) {
            p8.a.a(Integer.valueOf(this.surfaceId), "IntBufferBatchMountItem", "Executing IntBufferBatchMountItem on surface [%d]");
        }
        beginMarkers("mountViews");
        int i10 = 0;
        int i11 = 0;
        while (i10 < this.intBufferLen) {
            int[] iArr = this.intBuffer;
            int i12 = i10 + 1;
            int i13 = iArr[i10];
            int i14 = i13 & (-2);
            if ((i13 & 1) != 0) {
                int i15 = iArr[i12];
                i12 = i10 + 2;
                i5 = i15;
            } else {
                i5 = 1;
            }
            String[] args = {"numInstructions", String.valueOf(i5)};
            String sectionName = "IntBufferBatchMountItem::mountInstructions::" + INSTANCE.nameForInstructionString(i14);
            Intrinsics.checkNotNullParameter(sectionName, "sectionName");
            Intrinsics.checkNotNullParameter(args, "args");
            StringBuilder sb2 = new StringBuilder();
            String str = args[0];
            String str2 = args[1];
            sb2.append(str);
            sb2.append('=');
            sb2.append(str2);
            String sb3 = sb2.toString();
            Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
            c.e(sectionName + "|" + sb3);
            int i16 = i11;
            for (int i17 = 0; i17 < i5; i17++) {
                if (i14 == 2) {
                    int i18 = i16 + 1;
                    String str3 = (String) this.objBuffer[i16];
                    if (str3 == null) {
                        str3 = "";
                    }
                    String fabricComponentName = FabricNameComponentMapping.getFabricComponentName(str3);
                    int i19 = this.intBuffer[i12];
                    Object obj = this.objBuffer[i18];
                    Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type com.facebook.react.bridge.ReadableMap");
                    ReadableMap readableMap = (ReadableMap) obj;
                    Object[] objArr = this.objBuffer;
                    int i20 = i16 + 3;
                    StateWrapper stateWrapper = (StateWrapper) objArr[i16 + 2];
                    i16 += 4;
                    int i21 = i12 + 2;
                    surfaceManager.createView$ReactAndroid_release(fabricComponentName, i19, readableMap, stateWrapper, (EventEmitterWrapper) objArr[i20], this.intBuffer[i12 + 1] == 1);
                    i12 = i21;
                } else if (i14 == 4) {
                    surfaceManager.deleteView(this.intBuffer[i12]);
                    i12++;
                } else if (i14 == 8) {
                    int[] iArr2 = this.intBuffer;
                    int i22 = iArr2[i12];
                    int i23 = i12 + 2;
                    int i24 = iArr2[i12 + 1];
                    i12 += 3;
                    surfaceManager.addViewAt(i24, i22, iArr2[i23]);
                } else if (i14 == 16) {
                    int[] iArr3 = this.intBuffer;
                    int i25 = iArr3[i12];
                    int i26 = i12 + 2;
                    int i27 = iArr3[i12 + 1];
                    i12 += 3;
                    surfaceManager.removeViewAt(i25, i27, iArr3[i26]);
                } else if (i14 == 32) {
                    int i28 = i12 + 1;
                    int i29 = this.intBuffer[i12];
                    Object obj2 = this.objBuffer[i16];
                    Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type com.facebook.react.bridge.ReadableMap");
                    surfaceManager.updateProps(i29, (ReadableMap) obj2);
                    i12 = i28;
                    i16++;
                } else if (i14 == 64) {
                    surfaceManager.updateState(this.intBuffer[i12], (StateWrapper) this.objBuffer[i16]);
                    i12++;
                    i16++;
                } else if (i14 == 128) {
                    int[] iArr4 = this.intBuffer;
                    surfaceManager.updateLayout(iArr4[i12], iArr4[i12 + 1], iArr4[i12 + 2], iArr4[i12 + 3], iArr4[i12 + 4], iArr4[i12 + 5], iArr4[i12 + 6], iArr4[i12 + 7]);
                    i12 += 8;
                } else if (i14 != 256) {
                    if (i14 == 512) {
                        int[] iArr5 = this.intBuffer;
                        i6 = i12 + 5;
                        surfaceManager.updatePadding(iArr5[i12], iArr5[i12 + 1], iArr5[i12 + 2], iArr5[i12 + 3], iArr5[i12 + 4]);
                    } else {
                        if (i14 != 1024) {
                            throw new IllegalArgumentException(e.f(i14, i12, "Invalid type argument to IntBufferBatchMountItem: ", " at index: "));
                        }
                        int[] iArr6 = this.intBuffer;
                        i6 = i12 + 5;
                        surfaceManager.updateOverflowInset(iArr6[i12], iArr6[i12 + 1], iArr6[i12 + 2], iArr6[i12 + 3], iArr6[i12 + 4]);
                    }
                    i12 = i6;
                } else {
                    int i30 = i16 + 1;
                    EventEmitterWrapper eventEmitterWrapper = (EventEmitterWrapper) this.objBuffer[i16];
                    if (eventEmitterWrapper != null) {
                        surfaceManager.updateEventEmitter$ReactAndroid_release(this.intBuffer[i12], eventEmitterWrapper);
                        i16 = i30;
                        i12++;
                    } else {
                        i16 = i30;
                    }
                }
            }
            Trace.endSection();
            i10 = i12;
            i11 = i16;
        }
        endMarkers();
    }

    @Override // com.facebook.react.fabric.mounting.mountitems.MountItem
    public int getSurfaceId() {
        return this.surfaceId;
    }

    @Override // com.facebook.react.fabric.mounting.mountitems.BatchMountItem
    public boolean isBatchEmpty() {
        return this.intBufferLen == 0;
    }

    @NotNull
    public String toString() {
        String str;
        int i5;
        int i6;
        int i10;
        String str2 = "";
        try {
            StringBuilder sb2 = new StringBuilder();
            StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
            int i11 = 1;
            String format = String.format(Locale.ROOT, "IntBufferBatchMountItem [surface:%d]:\n", Arrays.copyOf(new Object[]{Integer.valueOf(this.surfaceId)}, 1));
            Intrinsics.checkNotNullExpressionValue(format, "format(...)");
            sb2.append(format);
            int i12 = 0;
            int i13 = 0;
            while (i12 < this.intBufferLen) {
                int[] iArr = this.intBuffer;
                int i14 = i12 + 1;
                int i15 = iArr[i12];
                int i16 = i15 & (-2);
                if ((i15 & i11) != 0) {
                    int i17 = i12 + 2;
                    i5 = iArr[i14];
                    i14 = i17;
                } else {
                    i5 = i11;
                }
                i12 = i14;
                int i18 = 0;
                while (i18 < i5) {
                    if (i16 != 2) {
                        if (i16 == 4) {
                            str = str2;
                            StringCompanionObject stringCompanionObject2 = StringCompanionObject.INSTANCE;
                            i6 = i12 + 1;
                            String format2 = String.format(Locale.ROOT, "DELETE [%d]\n", Arrays.copyOf(new Object[]{Integer.valueOf(this.intBuffer[i12])}, 1));
                            Intrinsics.checkNotNullExpressionValue(format2, "format(...)");
                            sb2.append(format2);
                        } else if (i16 == 8) {
                            str = str2;
                            StringCompanionObject stringCompanionObject3 = StringCompanionObject.INSTANCE;
                            Locale locale = Locale.ROOT;
                            Integer valueOf = Integer.valueOf(this.intBuffer[i12]);
                            int i19 = i12 + 2;
                            Integer valueOf2 = Integer.valueOf(this.intBuffer[i12 + 1]);
                            i12 += 3;
                            String format3 = String.format(locale, "INSERT [%d]->[%d] @%d\n", Arrays.copyOf(new Object[]{valueOf, valueOf2, Integer.valueOf(this.intBuffer[i19])}, 3));
                            Intrinsics.checkNotNullExpressionValue(format3, "format(...)");
                            sb2.append(format3);
                        } else if (i16 != 16) {
                            String str3 = "<hidden>";
                            if (i16 == 32) {
                                str = str2;
                                i10 = i13 + 1;
                                Object obj = this.objBuffer[i13];
                                if (FabricUIManager.IS_DEVELOPMENT_ENVIRONMENT && (obj == null || (str3 = obj.toString()) == null)) {
                                    str3 = "<null>";
                                }
                                StringCompanionObject stringCompanionObject4 = StringCompanionObject.INSTANCE;
                                i6 = i12 + 1;
                                String format4 = String.format(Locale.ROOT, "UPDATE PROPS [%d]: %s\n", Arrays.copyOf(new Object[]{Integer.valueOf(this.intBuffer[i12]), str3}, 2));
                                Intrinsics.checkNotNullExpressionValue(format4, "format(...)");
                                sb2.append(format4);
                            } else if (i16 == 64) {
                                str = str2;
                                i10 = i13 + 1;
                                StateWrapper stateWrapper = (StateWrapper) this.objBuffer[i13];
                                if (FabricUIManager.IS_DEVELOPMENT_ENVIRONMENT && (stateWrapper == null || (str3 = stateWrapper.toString()) == null)) {
                                    str3 = "<null>";
                                }
                                StringCompanionObject stringCompanionObject5 = StringCompanionObject.INSTANCE;
                                i6 = i12 + 1;
                                String format5 = String.format(Locale.ROOT, "UPDATE STATE [%d]: %s\n", Arrays.copyOf(new Object[]{Integer.valueOf(this.intBuffer[i12]), str3}, 2));
                                Intrinsics.checkNotNullExpressionValue(format5, "format(...)");
                                sb2.append(format5);
                            } else if (i16 == 128) {
                                str = str2;
                                StringCompanionObject stringCompanionObject6 = StringCompanionObject.INSTANCE;
                                Locale locale2 = Locale.ROOT;
                                Integer valueOf3 = Integer.valueOf(this.intBuffer[i12]);
                                Integer valueOf4 = Integer.valueOf(this.intBuffer[i12 + 1]);
                                Integer valueOf5 = Integer.valueOf(this.intBuffer[i12 + 2]);
                                Integer valueOf6 = Integer.valueOf(this.intBuffer[i12 + 3]);
                                Integer valueOf7 = Integer.valueOf(this.intBuffer[i12 + 4]);
                                Integer valueOf8 = Integer.valueOf(this.intBuffer[i12 + 5]);
                                int i20 = i12 + 7;
                                Integer valueOf9 = Integer.valueOf(this.intBuffer[i12 + 6]);
                                i12 += 8;
                                String format6 = String.format(locale2, "UPDATE LAYOUT [%d]->[%d]: x:%d y:%d w:%d h:%d displayType:%d layoutDirection:%d\n", Arrays.copyOf(new Object[]{valueOf3, valueOf4, valueOf5, valueOf6, valueOf7, valueOf8, valueOf9, Integer.valueOf(this.intBuffer[i20])}, 8));
                                Intrinsics.checkNotNullExpressionValue(format6, "format(...)");
                                sb2.append(format6);
                            } else if (i16 == 256) {
                                str = str2;
                                i13++;
                                StringCompanionObject stringCompanionObject7 = StringCompanionObject.INSTANCE;
                                i6 = i12 + 1;
                                String format7 = String.format(Locale.ROOT, "UPDATE EVENTEMITTER [%d]\n", Arrays.copyOf(new Object[]{Integer.valueOf(this.intBuffer[i12])}, 1));
                                Intrinsics.checkNotNullExpressionValue(format7, "format(...)");
                                sb2.append(format7);
                            } else if (i16 == 512) {
                                str = str2;
                                StringCompanionObject stringCompanionObject8 = StringCompanionObject.INSTANCE;
                                Locale locale3 = Locale.ROOT;
                                Integer valueOf10 = Integer.valueOf(this.intBuffer[i12]);
                                Integer valueOf11 = Integer.valueOf(this.intBuffer[i12 + 1]);
                                Integer valueOf12 = Integer.valueOf(this.intBuffer[i12 + 2]);
                                int i21 = i12 + 4;
                                Integer valueOf13 = Integer.valueOf(this.intBuffer[i12 + 3]);
                                i12 += 5;
                                String format8 = String.format(locale3, "UPDATE PADDING [%d]: top:%d right:%d bottom:%d left:%d\n", Arrays.copyOf(new Object[]{valueOf10, valueOf11, valueOf12, valueOf13, Integer.valueOf(this.intBuffer[i21])}, 5));
                                Intrinsics.checkNotNullExpressionValue(format8, "format(...)");
                                sb2.append(format8);
                            } else {
                                if (i16 != 1024) {
                                    p8.a.g("IntBufferBatchMountItem", "String so far: " + ((Object) sb2));
                                    throw new IllegalArgumentException("Invalid type argument to IntBufferBatchMountItem: " + i16 + " at index: " + i12);
                                }
                                StringCompanionObject stringCompanionObject9 = StringCompanionObject.INSTANCE;
                                Locale locale4 = Locale.ROOT;
                                Integer valueOf14 = Integer.valueOf(this.intBuffer[i12]);
                                Integer valueOf15 = Integer.valueOf(this.intBuffer[i12 + 1]);
                                Integer valueOf16 = Integer.valueOf(this.intBuffer[i12 + 2]);
                                int i22 = i12 + 4;
                                Integer valueOf17 = Integer.valueOf(this.intBuffer[i12 + 3]);
                                str = str2;
                                try {
                                    i12 += 5;
                                    String format9 = String.format(locale4, "UPDATE OVERFLOWINSET [%d]: left:%d top:%d right:%d bottom:%d\n", Arrays.copyOf(new Object[]{valueOf14, valueOf15, valueOf16, valueOf17, Integer.valueOf(this.intBuffer[i22])}, 5));
                                    Intrinsics.checkNotNullExpressionValue(format9, "format(...)");
                                    sb2.append(format9);
                                } catch (Exception e9) {
                                    e = e9;
                                    p8.a.h("IntBufferBatchMountItem", "Caught exception trying to print", e);
                                    StringBuilder sb3 = new StringBuilder();
                                    for (int i23 = 0; i23 < this.intBufferLen; i23++) {
                                        sb3.append(this.intBuffer[i23]);
                                        sb3.append(", ");
                                    }
                                    p8.a.g("IntBufferBatchMountItem", sb3.toString());
                                    for (int i24 = 0; i24 < this.objBufferLen; i24++) {
                                        Object obj2 = this.objBuffer[i24];
                                        p8.a.g("IntBufferBatchMountItem", obj2 != null ? String.valueOf(obj2) : "null");
                                    }
                                    return str;
                                }
                            }
                            i13 = i10;
                        } else {
                            str = str2;
                            StringCompanionObject stringCompanionObject10 = StringCompanionObject.INSTANCE;
                            Locale locale5 = Locale.ROOT;
                            Integer valueOf18 = Integer.valueOf(this.intBuffer[i12]);
                            int i25 = i12 + 2;
                            Integer valueOf19 = Integer.valueOf(this.intBuffer[i12 + 1]);
                            i12 += 3;
                            String format10 = String.format(locale5, "REMOVE [%d]->[%d] @%d\n", Arrays.copyOf(new Object[]{valueOf18, valueOf19, Integer.valueOf(this.intBuffer[i25])}, 3));
                            Intrinsics.checkNotNullExpressionValue(format10, "format(...)");
                            sb2.append(format10);
                        }
                        i12 = i6;
                    } else {
                        str = str2;
                        String str4 = (String) this.objBuffer[i13];
                        if (str4 == null) {
                            str4 = str;
                        }
                        String fabricComponentName = FabricNameComponentMapping.getFabricComponentName(str4);
                        i13 += 4;
                        StringCompanionObject stringCompanionObject11 = StringCompanionObject.INSTANCE;
                        Locale locale6 = Locale.ROOT;
                        int i26 = i12 + 1;
                        Integer valueOf20 = Integer.valueOf(this.intBuffer[i12]);
                        i12 += 2;
                        String format11 = String.format(locale6, "CREATE [%d] - layoutable:%d - %s\n", Arrays.copyOf(new Object[]{valueOf20, Integer.valueOf(this.intBuffer[i26]), fabricComponentName}, 3));
                        Intrinsics.checkNotNullExpressionValue(format11, "format(...)");
                        sb2.append(format11);
                    }
                    i18++;
                    str2 = str;
                    i11 = 1;
                }
            }
            String sb4 = sb2.toString();
            Intrinsics.checkNotNullExpressionValue(sb4, "toString(...)");
            return sb4;
        } catch (Exception e10) {
            e = e10;
            str = str2;
        }
    }
}
