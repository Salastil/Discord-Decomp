package app.rive;

import app.rive.core.ArtboardHandle;
import app.rive.core.CloseOnce;
import app.rive.core.CommandQueue;
import app.rive.core.FileHandle;
import app.rive.core.ViewModelInstanceHandle;
import app.rive.runtime.kotlin.core.ViewModel;
import java.util.LinkedHashMap;
import java.util.Map;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import kotlinx.coroutines.flow.MutableSharedFlow;
import lo.c;
import lo.d;
import org.jetbrains.annotations.NotNull;
import qr.h0;
import qr.u;
import qr.x;
import qr.y;
import s4.h;

@Metadata(d1 = {"\u0000\u008c\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0007\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u000e\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0014\n\u0002\u0010%\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u000f\b\u0007\u0018\u0000 g2\u00020\u0001:\u0001gB%\b\u0000\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\n\u0010\u0006\u001a\u00060\u0004j\u0002`\u0005\u0012\u0006\u0010\b\u001a\u00020\u0007¢\u0006\u0004\b\t\u0010\nJ\u0010\u0010\f\u001a\u00020\u000bH\u0096\u0001¢\u0006\u0004\b\f\u0010\rJ\u001b\u0010\u0012\u001a\u00020\u000f2\n\u0010\u000e\u001a\u00060\u0004j\u0002`\u0005H\u0000¢\u0006\u0004\b\u0010\u0010\u0011J\u001b\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00160\u00152\u0006\u0010\u0014\u001a\u00020\u0013¢\u0006\u0004\b\u0017\u0010\u0018J\u001b\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\u00130\u00152\u0006\u0010\u0014\u001a\u00020\u0013¢\u0006\u0004\b\u0019\u0010\u0018J\u001b\u0010\u001a\u001a\b\u0012\u0004\u0012\u00020\u000f0\u00152\u0006\u0010\u0014\u001a\u00020\u0013¢\u0006\u0004\b\u001a\u0010\u0018J\u001b\u0010\u001b\u001a\b\u0012\u0004\u0012\u00020\u00130\u00152\u0006\u0010\u0014\u001a\u00020\u0013¢\u0006\u0004\b\u001b\u0010\u0018J\u001b\u0010\u001d\u001a\b\u0012\u0004\u0012\u00020\u001c0\u00152\u0006\u0010\u0014\u001a\u00020\u0013¢\u0006\u0004\b\u001d\u0010\u0018J\u001b\u0010\u001e\u001a\b\u0012\u0004\u0012\u00020\u000b0\u00152\u0006\u0010\u0014\u001a\u00020\u0013¢\u0006\u0004\b\u001e\u0010\u0018J\u001d\u0010 \u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u00132\u0006\u0010\u001f\u001a\u00020\u0016¢\u0006\u0004\b \u0010!J\u001d\u0010\"\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u00132\u0006\u0010\u001f\u001a\u00020\u0013¢\u0006\u0004\b\"\u0010#J\u001d\u0010$\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u00132\u0006\u0010\u001f\u001a\u00020\u000f¢\u0006\u0004\b$\u0010%J\u001d\u0010&\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u00132\u0006\u0010\u001f\u001a\u00020\u0013¢\u0006\u0004\b&\u0010#J\u001f\u0010'\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u00132\b\b\u0001\u0010\u001f\u001a\u00020\u001c¢\u0006\u0004\b'\u0010(J\u0015\u0010)\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u0013¢\u0006\u0004\b)\u0010*J\u001d\u0010-\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u00132\u0006\u0010,\u001a\u00020+¢\u0006\u0004\b-\u0010.J\u001d\u00101\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u00132\u0006\u00100\u001a\u00020/¢\u0006\u0004\b1\u00102J\u001d\u00104\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u00132\u0006\u00103\u001a\u00020\u0000¢\u0006\u0004\b4\u00105J\u0018\u00106\u001a\u00020\u001c2\u0006\u0010\u0014\u001a\u00020\u0013H\u0086@¢\u0006\u0004\b6\u00107J%\u0010:\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u00132\u0006\u00108\u001a\u00020\u001c2\u0006\u00109\u001a\u00020\u0000¢\u0006\u0004\b:\u0010;J\u001d\u0010<\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u00132\u0006\u00109\u001a\u00020\u0000¢\u0006\u0004\b<\u00105J\u001d\u0010=\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u00132\u0006\u00108\u001a\u00020\u001c¢\u0006\u0004\b=\u0010(J\u001d\u0010>\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u00132\u0006\u00109\u001a\u00020\u0000¢\u0006\u0004\b>\u00105J%\u0010A\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u00132\u0006\u0010?\u001a\u00020\u001c2\u0006\u0010@\u001a\u00020\u001c¢\u0006\u0004\bA\u0010BJ\u008d\u0001\u0010P\u001a\b\u0012\u0004\u0012\u00028\u00000\u0015\"\u0004\b\u0000\u0010C2\u0006\u0010\u0014\u001a\u00020\u00132\u0018\u0010E\u001a\u0014\u0012\u0004\u0012\u00020\u0013\u0012\n\u0012\b\u0012\u0004\u0012\u00028\u00000\u00150D2(\u0010I\u001a$\b\u0001\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\u0013\u0012\n\u0012\b\u0012\u0004\u0012\u00028\u00000G\u0012\u0006\u0012\u0004\u0018\u00010H0F2\u001c\u0010M\u001a\u0018\u0012\u0014\u0012\u0012\u0012\u0004\u0012\u00028\u00000Kj\b\u0012\u0004\u0012\u00028\u0000`L0J2\u0006\u0010O\u001a\u00020NH\u0002¢\u0006\u0004\bP\u0010QJE\u0010S\u001a\u00020\u000b\"\u0004\b\u0000\u0010C2\u0006\u0010\u0014\u001a\u00020\u00132\u0006\u0010\u001f\u001a\u00028\u00002\u001e\u0010R\u001a\u001a\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00020\u000b0FH\u0002¢\u0006\u0004\bS\u0010TR\u001d\u0010\u0003\u001a\u00020\u00028\u0006ø\u0001\u0000ø\u0001\u0001¢\u0006\f\n\u0004\b\u0003\u0010U\u001a\u0004\bV\u0010WR\u0018\u0010\u0006\u001a\u00060\u0004j\u0002`\u00058\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0006\u0010XR\u001a\u0010\b\u001a\u00020\u00078\u0002X\u0082\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\u0006\n\u0004\b\b\u0010UR\u001a\u0010Z\u001a\b\u0012\u0004\u0012\u00020\u000b0Y8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bZ\u0010[R \u0010\\\u001a\b\u0012\u0004\u0012\u00020\u000b0J8\u0000X\u0080\u0004¢\u0006\f\n\u0004\b\\\u0010]\u001a\u0004\b^\u0010_R&\u0010`\u001a\u0014\u0012\u0004\u0012\u00020\u0013\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00160\u00150D8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b`\u0010aR&\u0010b\u001a\u0014\u0012\u0004\u0012\u00020\u0013\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00130\u00150D8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bb\u0010aR&\u0010c\u001a\u0014\u0012\u0004\u0012\u00020\u0013\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u000f0\u00150D8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bc\u0010aR&\u0010d\u001a\u0014\u0012\u0004\u0012\u00020\u0013\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00130\u00150D8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bd\u0010aR&\u0010e\u001a\u0014\u0012\u0004\u0012\u00020\u0013\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u001c0\u00150D8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\be\u0010aR&\u0010f\u001a\u0014\u0012\u0004\u0012\u00020\u0013\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u000b0\u00150D8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bf\u0010a\u0082\u0002\u000b\n\u0005\b¡\u001e0\u0001\n\u0002\b!¨\u0006h"}, d2 = {"Lapp/rive/ViewModelInstance;", "Ljava/lang/AutoCloseable;", "Lapp/rive/core/ViewModelInstanceHandle;", "instanceHandle", "Lapp/rive/core/CommandQueue;", "Lapp/rive/core/RiveWorker;", "riveWorker", "Lapp/rive/core/FileHandle;", "fileHandle", "<init>", "(JLapp/rive/core/CommandQueue;JLkotlin/jvm/internal/DefaultConstructorMarker;)V", "", "close", "()V", "worker", "", "isOwnedBy$kotlin_release", "(Lapp/rive/core/CommandQueue;)Z", "isOwnedBy", "", "propertyPath", "Lkotlinx/coroutines/flow/Flow;", "", "getNumberFlow", "(Ljava/lang/String;)Lkotlinx/coroutines/flow/Flow;", "getStringFlow", "getBooleanFlow", "getEnumFlow", "", "getColorFlow", "getTriggerFlow", "value", "setNumber", "(Ljava/lang/String;F)V", "setString", "(Ljava/lang/String;Ljava/lang/String;)V", "setBoolean", "(Ljava/lang/String;Z)V", "setEnum", "setColor", "(Ljava/lang/String;I)V", "fireTrigger", "(Ljava/lang/String;)V", "Lapp/rive/ImageAsset;", "image", "setImage", "(Ljava/lang/String;Lapp/rive/ImageAsset;)V", "Lapp/rive/Artboard;", "artboard", "setArtboard", "(Ljava/lang/String;Lapp/rive/Artboard;)V", "instance", "setViewModelInstance", "(Ljava/lang/String;Lapp/rive/ViewModelInstance;)V", "getListSize", "(Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "index", "item", "insertToListAtIndex", "(Ljava/lang/String;ILapp/rive/ViewModelInstance;)V", "appendToList", "removeFromListAtIndex", "removeFromList", "indexA", "indexB", "swapListItems", "(Ljava/lang/String;II)V", "T", "", "cache", "Lkotlin/Function3;", "Lkotlin/coroutines/Continuation;", "", "getter", "Lqr/u;", "Lapp/rive/core/CommandQueue$PropertyUpdate;", "Lapp/rive/core/RivePropertyUpdate;", "updateFlow", "Lapp/rive/runtime/kotlin/core/ViewModel$PropertyDataType;", "propertyType", "getPropertyFlow", "(Ljava/lang/String;Ljava/util/Map;Lkotlin/jvm/functions/Function3;Lqr/u;Lapp/rive/runtime/kotlin/core/ViewModel$PropertyDataType;)Lkotlinx/coroutines/flow/Flow;", "setter", "setProperty", "(Ljava/lang/String;Ljava/lang/Object;Lkotlin/jvm/functions/Function3;)V", "J", "getInstanceHandle-VPLto4w", "()J", "Lapp/rive/core/CommandQueue;", "Lkotlinx/coroutines/flow/MutableSharedFlow;", "_dirtyFlow", "Lkotlinx/coroutines/flow/MutableSharedFlow;", "dirtyFlow", "Lqr/u;", "getDirtyFlow$kotlin_release", "()Lqr/u;", "numberFlows", "Ljava/util/Map;", "stringFlows", "booleanFlows", "enumFlows", "colorFlows", "triggerFlows", "Companion", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nViewModelInstance.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ViewModelInstance.kt\napp/rive/ViewModelInstance\n+ 2 Maps.kt\nkotlin/collections/MapsKt__MapsKt\n+ 3 Transform.kt\nkotlinx/coroutines/flow/FlowKt__TransformKt\n+ 4 Emitters.kt\nkotlinx/coroutines/flow/FlowKt__EmittersKt\n+ 5 SafeCollector.common.kt\nkotlinx/coroutines/flow/internal/SafeCollector_commonKt\n+ 6 RiveLog.kt\napp/rive/RiveLog\n*L\n1#1,597:1\n381#2,3:598\n384#2,4:611\n381#2,3:615\n384#2,4:628\n17#3:601\n19#3:605\n49#3:606\n51#3:610\n17#3:618\n19#3:622\n49#3:623\n51#3:627\n46#4:602\n51#4:604\n46#4:607\n51#4:609\n46#4:619\n51#4:621\n46#4:624\n51#4:626\n105#5:603\n105#5:608\n105#5:620\n105#5:625\n57#6:632\n57#6:633\n57#6:634\n*S KotlinDebug\n*F\n+ 1 ViewModelInstance.kt\napp/rive/ViewModelInstance\n*L\n95#1:598,3\n95#1:611,4\n226#1:615,3\n226#1:628,4\n104#1:601\n104#1:605\n105#1:606\n105#1:610\n235#1:618\n235#1:622\n236#1:623\n236#1:627\n104#1:602\n104#1:604\n105#1:607\n105#1:609\n235#1:619\n235#1:621\n236#1:624\n236#1:626\n104#1:603\n105#1:608\n235#1:620\n236#1:625\n331#1:632\n345#1:633\n371#1:634\n*E\n"})
/* loaded from: classes.dex */
public final class ViewModelInstance implements AutoCloseable {
    private final /* synthetic */ CloseOnce $$delegate_0;

    @NotNull
    private final MutableSharedFlow _dirtyFlow;

    @NotNull
    private final Map<String, Flow> booleanFlows;

    @NotNull
    private final Map<String, Flow> colorFlows;

    @NotNull
    private final u dirtyFlow;

    @NotNull
    private final Map<String, Flow> enumFlows;
    private final long fileHandle;
    private final long instanceHandle;

    @NotNull
    private final Map<String, Flow> numberFlows;

    @NotNull
    private final CommandQueue riveWorker;

    @NotNull
    private final Map<String, Flow> stringFlows;

    @NotNull
    private final Map<String, Flow> triggerFlows;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    public static final int $stable = 8;

    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0016\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b¨\u0006\t"}, d2 = {"Lapp/rive/ViewModelInstance$Companion;", "", "()V", "fromFile", "Lapp/rive/ViewModelInstance;", "file", "Lapp/rive/RiveFile;", "source", "Lapp/rive/ViewModelInstanceSource;", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nViewModelInstance.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ViewModelInstance.kt\napp/rive/ViewModelInstance$Companion\n+ 2 RiveLog.kt\napp/rive/RiveLog\n*L\n1#1,597:1\n57#2:598\n*S KotlinDebug\n*F\n+ 1 ViewModelInstance.kt\napp/rive/ViewModelInstance$Companion\n*L\n60#1:598\n*E\n"})
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final ViewModelInstance fromFile(@NotNull final RiveFile file, @NotNull final ViewModelInstanceSource source) {
            Intrinsics.checkNotNullParameter(file, "file");
            Intrinsics.checkNotNullParameter(source, "source");
            final long m131createViewModelInstancej73Dd8U = file.getRiveWorker().m131createViewModelInstancej73Dd8U(file.getFileHandle(), source);
            RiveLog.INSTANCE.getLogger().d(ViewModelInstanceKt.VM_INSTANCE_TAG, new Function0<String>() { // from class: app.rive.ViewModelInstance$Companion$fromFile$1
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    String m234toStringimpl = ViewModelInstanceHandle.m234toStringimpl(m131createViewModelInstancej73Dd8U);
                    ViewModelInstanceSource viewModelInstanceSource = source;
                    String m198toStringimpl = FileHandle.m198toStringimpl(file.getFileHandle());
                    StringBuilder sb2 = new StringBuilder("Created ");
                    sb2.append(m234toStringimpl);
                    sb2.append(" from source: ");
                    sb2.append(viewModelInstanceSource);
                    sb2.append(" (");
                    return com.discord.chat.bridge.botuikit.a.j(sb2, m198toStringimpl, ")");
                }
            });
            return new ViewModelInstance(m131createViewModelInstancej73Dd8U, file.getRiveWorker(), file.getFileHandle(), null);
        }

        private Companion() {
        }
    }

    public /* synthetic */ ViewModelInstance(long j, CommandQueue commandQueue, long j5, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, commandQueue, j5);
    }

    private final <T> Flow getPropertyFlow(final String propertyPath, Map<String, Flow> cache, Function3 getter, u updateFlow, ViewModel.PropertyDataType propertyType) {
        Flow flow = cache.get(propertyPath);
        if (flow == null) {
            final h0 h0Var = new h0(updateFlow, new ViewModelInstance$getPropertyFlow$1$1(this, propertyPath, propertyType, getter, null));
            final Flow flow2 = new Flow() { // from class: app.rive.ViewModelInstance$getPropertyFlow$lambda$2$$inlined$filter$1

                @Metadata(d1 = {"\u0000\f\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\u0010\u0006\u001a\u00020\u0003\"\u0004\b\u0000\u0010\u0000\"\u0004\b\u0001\u0010\u00012\u0006\u0010\u0002\u001a\u00028\u0000H\u008a@¢\u0006\u0004\b\u0004\u0010\u0005"}, d2 = {"T", "R", "value", "", "emit", "(Ljava/lang/Object;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "<anonymous>"}, k = 3, mv = {1, 9, 0})
                @SourceDebugExtension({"SMAP\nEmitters.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Emitters.kt\nkotlinx/coroutines/flow/FlowKt__EmittersKt$unsafeTransform$1$1\n+ 2 Transform.kt\nkotlinx/coroutines/flow/FlowKt__TransformKt\n+ 3 ViewModelInstance.kt\napp/rive/ViewModelInstance\n*L\n1#1,218:1\n18#2:219\n19#2:221\n104#3:220\n*E\n"})
                /* renamed from: app.rive.ViewModelInstance$getPropertyFlow$lambda$2$$inlined$filter$1$2, reason: invalid class name */
                public static final class AnonymousClass2<T> implements FlowCollector {
                    final /* synthetic */ String $propertyPath$inlined;
                    final /* synthetic */ FlowCollector $this_unsafeFlow;
                    final /* synthetic */ ViewModelInstance this$0;

                    @Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
                    @d(c = "app.rive.ViewModelInstance$getPropertyFlow$lambda$2$$inlined$filter$1$2", f = "ViewModelInstance.kt", l = {219}, m = "emit")
                    @SourceDebugExtension({"SMAP\nEmitters.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Emitters.kt\nkotlinx/coroutines/flow/FlowKt__EmittersKt$unsafeTransform$1$1$emit$1\n*L\n1#1,218:1\n*E\n"})
                    /* renamed from: app.rive.ViewModelInstance$getPropertyFlow$lambda$2$$inlined$filter$1$2$1, reason: invalid class name */
                    public static final class AnonymousClass1 extends c {
                        Object L$0;
                        Object L$1;
                        int label;
                        /* synthetic */ Object result;

                        public AnonymousClass1(Continuation continuation) {
                            super(continuation);
                        }

                        @Override // lo.a
                        public final Object invokeSuspend(@NotNull Object obj) {
                            this.result = obj;
                            this.label |= Integer.MIN_VALUE;
                            return AnonymousClass2.this.emit(null, this);
                        }
                    }

                    public AnonymousClass2(FlowCollector flowCollector, ViewModelInstance viewModelInstance, String str) {
                        this.$this_unsafeFlow = flowCollector;
                        this.this$0 = viewModelInstance;
                        this.$propertyPath$inlined = str;
                    }

                    /* JADX WARN: Removed duplicated region for block: B:15:0x002f  */
                    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
                    @Override // kotlinx.coroutines.flow.FlowCollector
                    /*
                        Code decompiled incorrectly, please refer to instructions dump.
                    */
                    public final Object emit(Object obj, @NotNull Continuation continuation) {
                        AnonymousClass1 anonymousClass1;
                        int i5;
                        if (continuation instanceof AnonymousClass1) {
                            anonymousClass1 = (AnonymousClass1) continuation;
                            int i6 = anonymousClass1.label;
                            if ((i6 & Integer.MIN_VALUE) != 0) {
                                anonymousClass1.label = i6 - Integer.MIN_VALUE;
                                Object obj2 = anonymousClass1.result;
                                ko.a aVar = ko.a.f13464d;
                                i5 = anonymousClass1.label;
                                if (i5 != 0) {
                                    b.R(obj2);
                                    FlowCollector flowCollector = this.$this_unsafeFlow;
                                    CommandQueue.PropertyUpdate propertyUpdate = (CommandQueue.PropertyUpdate) obj;
                                    if (ViewModelInstanceHandle.m232equalsimpl0(propertyUpdate.m184getHandleVPLto4w(), this.this$0.getInstanceHandle()) && Intrinsics.areEqual(propertyUpdate.getPropertyPath(), this.$propertyPath$inlined)) {
                                        anonymousClass1.label = 1;
                                        if (flowCollector.emit(obj, anonymousClass1) == aVar) {
                                            return aVar;
                                        }
                                    }
                                } else {
                                    if (i5 != 1) {
                                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                                    }
                                    b.R(obj2);
                                }
                                return Unit.a;
                            }
                        }
                        anonymousClass1 = new AnonymousClass1(continuation);
                        Object obj22 = anonymousClass1.result;
                        ko.a aVar2 = ko.a.f13464d;
                        i5 = anonymousClass1.label;
                        if (i5 != 0) {
                        }
                        return Unit.a;
                    }
                }

                @Override // kotlinx.coroutines.flow.Flow
                public Object collect(@NotNull FlowCollector flowCollector, @NotNull Continuation continuation) {
                    Object collect = Flow.this.collect(new AnonymousClass2(flowCollector, this, propertyPath), continuation);
                    return collect == ko.a.f13464d ? collect : Unit.a;
                }
            };
            flow = y.h(new Flow() { // from class: app.rive.ViewModelInstance$getPropertyFlow$lambda$2$$inlined$map$1

                @Metadata(d1 = {"\u0000\f\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\u0010\u0006\u001a\u00020\u0003\"\u0004\b\u0000\u0010\u0000\"\u0004\b\u0001\u0010\u00012\u0006\u0010\u0002\u001a\u00028\u0000H\u008a@¢\u0006\u0004\b\u0004\u0010\u0005"}, d2 = {"T", "R", "value", "", "emit", "(Ljava/lang/Object;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "<anonymous>"}, k = 3, mv = {1, 9, 0})
                @SourceDebugExtension({"SMAP\nEmitters.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Emitters.kt\nkotlinx/coroutines/flow/FlowKt__EmittersKt$unsafeTransform$1$1\n+ 2 Transform.kt\nkotlinx/coroutines/flow/FlowKt__TransformKt\n+ 3 ViewModelInstance.kt\napp/rive/ViewModelInstance\n*L\n1#1,218:1\n50#2:219\n105#3:220\n*E\n"})
                /* renamed from: app.rive.ViewModelInstance$getPropertyFlow$lambda$2$$inlined$map$1$2, reason: invalid class name */
                public static final class AnonymousClass2<T> implements FlowCollector {
                    final /* synthetic */ FlowCollector $this_unsafeFlow;

                    @Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
                    @d(c = "app.rive.ViewModelInstance$getPropertyFlow$lambda$2$$inlined$map$1$2", f = "ViewModelInstance.kt", l = {219}, m = "emit")
                    @SourceDebugExtension({"SMAP\nEmitters.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Emitters.kt\nkotlinx/coroutines/flow/FlowKt__EmittersKt$unsafeTransform$1$1$emit$1\n*L\n1#1,218:1\n*E\n"})
                    /* renamed from: app.rive.ViewModelInstance$getPropertyFlow$lambda$2$$inlined$map$1$2$1, reason: invalid class name */
                    public static final class AnonymousClass1 extends c {
                        Object L$0;
                        int label;
                        /* synthetic */ Object result;

                        public AnonymousClass1(Continuation continuation) {
                            super(continuation);
                        }

                        @Override // lo.a
                        public final Object invokeSuspend(@NotNull Object obj) {
                            this.result = obj;
                            this.label |= Integer.MIN_VALUE;
                            return AnonymousClass2.this.emit(null, this);
                        }
                    }

                    public AnonymousClass2(FlowCollector flowCollector) {
                        this.$this_unsafeFlow = flowCollector;
                    }

                    /* JADX WARN: Removed duplicated region for block: B:15:0x002f  */
                    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
                    @Override // kotlinx.coroutines.flow.FlowCollector
                    /*
                        Code decompiled incorrectly, please refer to instructions dump.
                    */
                    public final Object emit(Object obj, @NotNull Continuation continuation) {
                        AnonymousClass1 anonymousClass1;
                        int i5;
                        if (continuation instanceof AnonymousClass1) {
                            anonymousClass1 = (AnonymousClass1) continuation;
                            int i6 = anonymousClass1.label;
                            if ((i6 & Integer.MIN_VALUE) != 0) {
                                anonymousClass1.label = i6 - Integer.MIN_VALUE;
                                Object obj2 = anonymousClass1.result;
                                ko.a aVar = ko.a.f13464d;
                                i5 = anonymousClass1.label;
                                if (i5 != 0) {
                                    b.R(obj2);
                                    FlowCollector flowCollector = this.$this_unsafeFlow;
                                    Object value = ((CommandQueue.PropertyUpdate) obj).getValue();
                                    anonymousClass1.label = 1;
                                    if (flowCollector.emit(value, anonymousClass1) == aVar) {
                                        return aVar;
                                    }
                                } else {
                                    if (i5 != 1) {
                                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                                    }
                                    b.R(obj2);
                                }
                                return Unit.a;
                            }
                        }
                        anonymousClass1 = new AnonymousClass1(continuation);
                        Object obj22 = anonymousClass1.result;
                        ko.a aVar2 = ko.a.f13464d;
                        i5 = anonymousClass1.label;
                        if (i5 != 0) {
                        }
                        return Unit.a;
                    }
                }

                @Override // kotlinx.coroutines.flow.Flow
                public Object collect(@NotNull FlowCollector flowCollector, @NotNull Continuation continuation) {
                    Object collect = Flow.this.collect(new AnonymousClass2(flowCollector), continuation);
                    return collect == ko.a.f13464d ? collect : Unit.a;
                }
            });
            cache.put(propertyPath, flow);
        }
        return flow;
    }

    private final <T> void setProperty(String propertyPath, T value, Function3 setter) {
        setter.invoke(ViewModelInstanceHandle.m229boximpl(this.instanceHandle), propertyPath, value);
        this._dirtyFlow.d(Unit.a);
    }

    public final void appendToList(@NotNull String propertyPath, @NotNull ViewModelInstance item) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        Intrinsics.checkNotNullParameter(item, "item");
        this.riveWorker.m124appendToListY8k3COA(this.instanceHandle, propertyPath, item.instanceHandle);
        this._dirtyFlow.d(Unit.a);
    }

    @Override // java.lang.AutoCloseable
    public void close() {
        this.$$delegate_0.close();
    }

    public final void fireTrigger(@NotNull String propertyPath) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.riveWorker.m144fireTriggerPropertyippgHXQ(this.instanceHandle, propertyPath);
    }

    @NotNull
    public final Flow getBooleanFlow(@NotNull String propertyPath) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        return getPropertyFlow(propertyPath, this.booleanFlows, new ViewModelInstance$getBooleanFlow$1(this.riveWorker), this.riveWorker.getBooleanPropertyFlow(), ViewModel.PropertyDataType.BOOLEAN);
    }

    @NotNull
    public final Flow getColorFlow(@NotNull String propertyPath) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        return getPropertyFlow(propertyPath, this.colorFlows, new ViewModelInstance$getColorFlow$1(this.riveWorker), this.riveWorker.getColorPropertyFlow(), ViewModel.PropertyDataType.COLOR);
    }

    @NotNull
    /* renamed from: getDirtyFlow$kotlin_release, reason: from getter */
    public final u getDirtyFlow() {
        return this.dirtyFlow;
    }

    @NotNull
    public final Flow getEnumFlow(@NotNull String propertyPath) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        return getPropertyFlow(propertyPath, this.enumFlows, new ViewModelInstance$getEnumFlow$1(this.riveWorker), this.riveWorker.getEnumPropertyFlow(), ViewModel.PropertyDataType.ENUM);
    }

    /* renamed from: getInstanceHandle-VPLto4w, reason: not valid java name and from getter */
    public final long getInstanceHandle() {
        return this.instanceHandle;
    }

    public final Object getListSize(@NotNull String str, @NotNull Continuation continuation) {
        return this.riveWorker.m151getListSizeiFQtAB8(this.instanceHandle, str, continuation);
    }

    @NotNull
    public final Flow getNumberFlow(@NotNull String propertyPath) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        return getPropertyFlow(propertyPath, this.numberFlows, new ViewModelInstance$getNumberFlow$1(this.riveWorker), this.riveWorker.getNumberPropertyFlow(), ViewModel.PropertyDataType.NUMBER);
    }

    @NotNull
    public final Flow getStringFlow(@NotNull String propertyPath) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        return getPropertyFlow(propertyPath, this.stringFlows, new ViewModelInstance$getStringFlow$1(this.riveWorker), this.riveWorker.getStringPropertyFlow(), ViewModel.PropertyDataType.STRING);
    }

    @NotNull
    public final Flow getTriggerFlow(@NotNull final String propertyPath) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        Map<String, Flow> map = this.triggerFlows;
        Flow flow = map.get(propertyPath);
        if (flow == null) {
            final h0 h0Var = new h0(this.riveWorker.getTriggerPropertyFlow(), new ViewModelInstance$getTriggerFlow$1$1(this, propertyPath, null));
            final Flow flow2 = new Flow() { // from class: app.rive.ViewModelInstance$getTriggerFlow$lambda$5$$inlined$filter$1

                @Metadata(d1 = {"\u0000\f\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\u0010\u0006\u001a\u00020\u0003\"\u0004\b\u0000\u0010\u0000\"\u0004\b\u0001\u0010\u00012\u0006\u0010\u0002\u001a\u00028\u0000H\u008a@¢\u0006\u0004\b\u0004\u0010\u0005"}, d2 = {"T", "R", "value", "", "emit", "(Ljava/lang/Object;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "<anonymous>"}, k = 3, mv = {1, 9, 0})
                @SourceDebugExtension({"SMAP\nEmitters.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Emitters.kt\nkotlinx/coroutines/flow/FlowKt__EmittersKt$unsafeTransform$1$1\n+ 2 Transform.kt\nkotlinx/coroutines/flow/FlowKt__TransformKt\n+ 3 ViewModelInstance.kt\napp/rive/ViewModelInstance\n*L\n1#1,218:1\n18#2:219\n19#2:221\n235#3:220\n*E\n"})
                /* renamed from: app.rive.ViewModelInstance$getTriggerFlow$lambda$5$$inlined$filter$1$2, reason: invalid class name */
                public static final class AnonymousClass2<T> implements FlowCollector {
                    final /* synthetic */ String $propertyPath$inlined;
                    final /* synthetic */ FlowCollector $this_unsafeFlow;
                    final /* synthetic */ ViewModelInstance this$0;

                    @Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
                    @d(c = "app.rive.ViewModelInstance$getTriggerFlow$lambda$5$$inlined$filter$1$2", f = "ViewModelInstance.kt", l = {219}, m = "emit")
                    @SourceDebugExtension({"SMAP\nEmitters.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Emitters.kt\nkotlinx/coroutines/flow/FlowKt__EmittersKt$unsafeTransform$1$1$emit$1\n*L\n1#1,218:1\n*E\n"})
                    /* renamed from: app.rive.ViewModelInstance$getTriggerFlow$lambda$5$$inlined$filter$1$2$1, reason: invalid class name */
                    public static final class AnonymousClass1 extends c {
                        Object L$0;
                        Object L$1;
                        int label;
                        /* synthetic */ Object result;

                        public AnonymousClass1(Continuation continuation) {
                            super(continuation);
                        }

                        @Override // lo.a
                        public final Object invokeSuspend(@NotNull Object obj) {
                            this.result = obj;
                            this.label |= Integer.MIN_VALUE;
                            return AnonymousClass2.this.emit(null, this);
                        }
                    }

                    public AnonymousClass2(FlowCollector flowCollector, ViewModelInstance viewModelInstance, String str) {
                        this.$this_unsafeFlow = flowCollector;
                        this.this$0 = viewModelInstance;
                        this.$propertyPath$inlined = str;
                    }

                    /* JADX WARN: Removed duplicated region for block: B:15:0x002f  */
                    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
                    @Override // kotlinx.coroutines.flow.FlowCollector
                    /*
                        Code decompiled incorrectly, please refer to instructions dump.
                    */
                    public final Object emit(Object obj, @NotNull Continuation continuation) {
                        AnonymousClass1 anonymousClass1;
                        int i5;
                        if (continuation instanceof AnonymousClass1) {
                            anonymousClass1 = (AnonymousClass1) continuation;
                            int i6 = anonymousClass1.label;
                            if ((i6 & Integer.MIN_VALUE) != 0) {
                                anonymousClass1.label = i6 - Integer.MIN_VALUE;
                                Object obj2 = anonymousClass1.result;
                                ko.a aVar = ko.a.f13464d;
                                i5 = anonymousClass1.label;
                                if (i5 != 0) {
                                    b.R(obj2);
                                    FlowCollector flowCollector = this.$this_unsafeFlow;
                                    CommandQueue.PropertyUpdate propertyUpdate = (CommandQueue.PropertyUpdate) obj;
                                    if (ViewModelInstanceHandle.m232equalsimpl0(propertyUpdate.m184getHandleVPLto4w(), this.this$0.getInstanceHandle()) && Intrinsics.areEqual(propertyUpdate.getPropertyPath(), this.$propertyPath$inlined)) {
                                        anonymousClass1.label = 1;
                                        if (flowCollector.emit(obj, anonymousClass1) == aVar) {
                                            return aVar;
                                        }
                                    }
                                } else {
                                    if (i5 != 1) {
                                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                                    }
                                    b.R(obj2);
                                }
                                return Unit.a;
                            }
                        }
                        anonymousClass1 = new AnonymousClass1(continuation);
                        Object obj22 = anonymousClass1.result;
                        ko.a aVar2 = ko.a.f13464d;
                        i5 = anonymousClass1.label;
                        if (i5 != 0) {
                        }
                        return Unit.a;
                    }
                }

                @Override // kotlinx.coroutines.flow.Flow
                public Object collect(@NotNull FlowCollector flowCollector, @NotNull Continuation continuation) {
                    Object collect = Flow.this.collect(new AnonymousClass2(flowCollector, this, propertyPath), continuation);
                    return collect == ko.a.f13464d ? collect : Unit.a;
                }
            };
            flow = y.e(new Flow() { // from class: app.rive.ViewModelInstance$getTriggerFlow$lambda$5$$inlined$map$1

                @Metadata(d1 = {"\u0000\f\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\u0010\u0006\u001a\u00020\u0003\"\u0004\b\u0000\u0010\u0000\"\u0004\b\u0001\u0010\u00012\u0006\u0010\u0002\u001a\u00028\u0000H\u008a@¢\u0006\u0004\b\u0004\u0010\u0005"}, d2 = {"T", "R", "value", "", "emit", "(Ljava/lang/Object;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "<anonymous>"}, k = 3, mv = {1, 9, 0})
                @SourceDebugExtension({"SMAP\nEmitters.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Emitters.kt\nkotlinx/coroutines/flow/FlowKt__EmittersKt$unsafeTransform$1$1\n+ 2 Transform.kt\nkotlinx/coroutines/flow/FlowKt__TransformKt\n+ 3 ViewModelInstance.kt\napp/rive/ViewModelInstance\n*L\n1#1,218:1\n50#2:219\n236#3:220\n*E\n"})
                /* renamed from: app.rive.ViewModelInstance$getTriggerFlow$lambda$5$$inlined$map$1$2, reason: invalid class name */
                public static final class AnonymousClass2<T> implements FlowCollector {
                    final /* synthetic */ FlowCollector $this_unsafeFlow;

                    @Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
                    @d(c = "app.rive.ViewModelInstance$getTriggerFlow$lambda$5$$inlined$map$1$2", f = "ViewModelInstance.kt", l = {219}, m = "emit")
                    @SourceDebugExtension({"SMAP\nEmitters.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Emitters.kt\nkotlinx/coroutines/flow/FlowKt__EmittersKt$unsafeTransform$1$1$emit$1\n*L\n1#1,218:1\n*E\n"})
                    /* renamed from: app.rive.ViewModelInstance$getTriggerFlow$lambda$5$$inlined$map$1$2$1, reason: invalid class name */
                    public static final class AnonymousClass1 extends c {
                        Object L$0;
                        int label;
                        /* synthetic */ Object result;

                        public AnonymousClass1(Continuation continuation) {
                            super(continuation);
                        }

                        @Override // lo.a
                        public final Object invokeSuspend(@NotNull Object obj) {
                            this.result = obj;
                            this.label |= Integer.MIN_VALUE;
                            return AnonymousClass2.this.emit(null, this);
                        }
                    }

                    public AnonymousClass2(FlowCollector flowCollector) {
                        this.$this_unsafeFlow = flowCollector;
                    }

                    /* JADX WARN: Removed duplicated region for block: B:15:0x002f  */
                    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
                    @Override // kotlinx.coroutines.flow.FlowCollector
                    /*
                        Code decompiled incorrectly, please refer to instructions dump.
                    */
                    public final Object emit(Object obj, @NotNull Continuation continuation) {
                        AnonymousClass1 anonymousClass1;
                        int i5;
                        if (continuation instanceof AnonymousClass1) {
                            anonymousClass1 = (AnonymousClass1) continuation;
                            int i6 = anonymousClass1.label;
                            if ((i6 & Integer.MIN_VALUE) != 0) {
                                anonymousClass1.label = i6 - Integer.MIN_VALUE;
                                Object obj2 = anonymousClass1.result;
                                ko.a aVar = ko.a.f13464d;
                                i5 = anonymousClass1.label;
                                if (i5 != 0) {
                                    b.R(obj2);
                                    FlowCollector flowCollector = this.$this_unsafeFlow;
                                    Unit unit = Unit.a;
                                    anonymousClass1.label = 1;
                                    if (flowCollector.emit(unit, anonymousClass1) == aVar) {
                                        return aVar;
                                    }
                                } else {
                                    if (i5 != 1) {
                                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                                    }
                                    b.R(obj2);
                                }
                                return Unit.a;
                            }
                        }
                        anonymousClass1 = new AnonymousClass1(continuation);
                        Object obj22 = anonymousClass1.result;
                        ko.a aVar2 = ko.a.f13464d;
                        i5 = anonymousClass1.label;
                        if (i5 != 0) {
                        }
                        return Unit.a;
                    }
                }

                @Override // kotlinx.coroutines.flow.Flow
                public Object collect(@NotNull FlowCollector flowCollector, @NotNull Continuation continuation) {
                    Object collect = Flow.this.collect(new AnonymousClass2(flowCollector), continuation);
                    return collect == ko.a.f13464d ? collect : Unit.a;
                }
            }, 32, pr.a.f16468e);
            map.put(propertyPath, flow);
        }
        return flow;
    }

    public final void insertToListAtIndex(@NotNull String propertyPath, int index, @NotNull ViewModelInstance item) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        Intrinsics.checkNotNullParameter(item, "item");
        this.riveWorker.m158insertToListAtIndex4ua1WBo(this.instanceHandle, propertyPath, index, item.instanceHandle);
        this._dirtyFlow.d(Unit.a);
    }

    public final boolean isOwnedBy$kotlin_release(@NotNull CommandQueue worker) {
        Intrinsics.checkNotNullParameter(worker, "worker");
        return this.riveWorker == worker;
    }

    public final void removeFromList(@NotNull String propertyPath, @NotNull ViewModelInstance item) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        Intrinsics.checkNotNullParameter(item, "item");
        this.riveWorker.m167removeFromListY8k3COA(this.instanceHandle, propertyPath, item.instanceHandle);
        this._dirtyFlow.d(Unit.a);
    }

    public final void removeFromListAtIndex(@NotNull String propertyPath, int index) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.riveWorker.m168removeFromListAtIndexiFQtAB8(this.instanceHandle, propertyPath, index);
        this._dirtyFlow.d(Unit.a);
    }

    public final void setArtboard(@NotNull final String propertyPath, @NotNull final Artboard artboard) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        Intrinsics.checkNotNullParameter(artboard, "artboard");
        RiveLog.INSTANCE.getLogger().d(ViewModelInstanceKt.VM_INSTANCE_TAG, new Function0<String>() { // from class: app.rive.ViewModelInstance$setArtboard$1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                long j;
                Artboard artboard2 = Artboard.this;
                String str = propertyPath;
                j = this.fileHandle;
                String m198toStringimpl = FileHandle.m198toStringimpl(j);
                StringBuilder sb2 = new StringBuilder("Assigning ");
                sb2.append(artboard2);
                sb2.append(" to ");
                sb2.append(str);
                sb2.append(" (");
                return com.discord.chat.bridge.botuikit.a.j(sb2, m198toStringimpl, ")");
            }
        });
        setProperty(propertyPath, ArtboardHandle.m104boximpl(artboard.getArtboardHandle()), new ViewModelInstance$setArtboard$2(this.riveWorker));
    }

    public final void setBoolean(@NotNull String propertyPath, boolean value) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        setProperty(propertyPath, Boolean.valueOf(value), new ViewModelInstance$setBoolean$1(this.riveWorker));
    }

    public final void setColor(@NotNull String propertyPath, int value) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        setProperty(propertyPath, Integer.valueOf(value), new ViewModelInstance$setColor$1(this.riveWorker));
    }

    public final void setEnum(@NotNull String propertyPath, @NotNull String value) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        Intrinsics.checkNotNullParameter(value, "value");
        setProperty(propertyPath, value, new ViewModelInstance$setEnum$1(this.riveWorker));
    }

    public final void setImage(@NotNull final String propertyPath, @NotNull final ImageAsset image) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        Intrinsics.checkNotNullParameter(image, "image");
        RiveLog.INSTANCE.getLogger().d(ViewModelInstanceKt.VM_INSTANCE_TAG, new Function0<String>() { // from class: app.rive.ViewModelInstance$setImage$1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                long j;
                ImageAsset imageAsset = ImageAsset.this;
                String str = propertyPath;
                j = this.fileHandle;
                String m198toStringimpl = FileHandle.m198toStringimpl(j);
                StringBuilder sb2 = new StringBuilder("Assigning ");
                sb2.append(imageAsset);
                sb2.append(" to ");
                sb2.append(str);
                sb2.append(" (");
                return com.discord.chat.bridge.botuikit.a.j(sb2, m198toStringimpl, ")");
            }
        });
        setProperty(propertyPath, image.getHandle(), new ViewModelInstance$setImage$2(this.riveWorker));
    }

    public final void setNumber(@NotNull String propertyPath, float value) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        setProperty(propertyPath, Float.valueOf(value), new ViewModelInstance$setNumber$1(this.riveWorker));
    }

    public final void setString(@NotNull String propertyPath, @NotNull String value) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        Intrinsics.checkNotNullParameter(value, "value");
        setProperty(propertyPath, value, new ViewModelInstance$setString$1(this.riveWorker));
    }

    public final void setViewModelInstance(@NotNull final String propertyPath, @NotNull final ViewModelInstance instance) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        Intrinsics.checkNotNullParameter(instance, "instance");
        RiveLog.INSTANCE.getLogger().d(ViewModelInstanceKt.VM_INSTANCE_TAG, new Function0<String>() { // from class: app.rive.ViewModelInstance$setViewModelInstance$1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                long j;
                ViewModelInstance viewModelInstance = ViewModelInstance.this;
                String str = propertyPath;
                j = this.fileHandle;
                String m198toStringimpl = FileHandle.m198toStringimpl(j);
                StringBuilder sb2 = new StringBuilder("Assigning ");
                sb2.append(viewModelInstance);
                sb2.append(" to ");
                sb2.append(str);
                sb2.append(" (");
                return com.discord.chat.bridge.botuikit.a.j(sb2, m198toStringimpl, ")");
            }
        });
        setProperty(propertyPath, ViewModelInstanceHandle.m229boximpl(instance.instanceHandle), new ViewModelInstance$setViewModelInstance$2(this.riveWorker));
    }

    public final void swapListItems(@NotNull String propertyPath, int indexA, int indexB) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.riveWorker.m180swapListItemsC5vwGj0(this.instanceHandle, propertyPath, indexA, indexB);
        this._dirtyFlow.d(Unit.a);
    }

    private ViewModelInstance(final long j, final CommandQueue riveWorker, final long j5) {
        Intrinsics.checkNotNullParameter(riveWorker, "riveWorker");
        this.instanceHandle = j;
        this.riveWorker = riveWorker;
        this.fileHandle = j5;
        this.$$delegate_0 = new CloseOnce(ViewModelInstanceHandle.m234toStringimpl(j), new Function0<Unit>() { // from class: app.rive.ViewModelInstance.1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Object invoke() {
                m56invoke();
                return Unit.a;
            }

            /* renamed from: invoke, reason: collision with other method in class */
            public final void m56invoke() {
                final long j7 = j;
                final long j10 = j5;
                RiveLog.INSTANCE.getLogger().d(ViewModelInstanceKt.VM_INSTANCE_TAG, new Function0<String>() { // from class: app.rive.ViewModelInstance.1.1
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return h.g("Deleting ", ViewModelInstanceHandle.m234toStringimpl(j7), " (", FileHandle.m198toStringimpl(j10), ")");
                    }
                });
                CommandQueue.this.m141deleteViewModelInstancemBajs_U(j);
            }
        });
        x a = y.a(1, 1, pr.a.f16468e);
        this._dirtyFlow = a;
        this.dirtyFlow = a;
        this.numberFlows = new LinkedHashMap();
        this.stringFlows = new LinkedHashMap();
        this.booleanFlows = new LinkedHashMap();
        this.enumFlows = new LinkedHashMap();
        this.colorFlows = new LinkedHashMap();
        this.triggerFlows = new LinkedHashMap();
    }
}
