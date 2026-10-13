package app.rive;

import a3.e;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import android.os.Trace;
import android.view.MotionEvent;
import androidx.lifecycle.Lifecycle;
import app.rive.Fit;
import app.rive.core.CloseOnce;
import app.rive.core.CommandQueue;
import app.rive.core.FrameTicker;
import app.rive.core.FrameTickerKt;
import app.rive.core.RenderingDefaults;
import app.rive.core.StateMachineHandle;
import app.rive.core.ViewModelInstanceHandle;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CompletableDeferred;
import kotlinx.coroutines.flow.MutableSharedFlow;
import kotlinx.coroutines.flow.MutableStateFlow;
import nr.x;
import org.jetbrains.annotations.NotNull;
import qr.u;
import qr.y;
import s4.h;
import to.n;

@Metadata(d1 = {"\u0000º\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0007\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u000b\b\u0007\u0018\u0000 U2\u00020\u0001:\u0001UBC\u0012\n\u0010\u0004\u001a\u00060\u0002j\u0002`\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\u0006\u0010\b\u001a\u00020\u0007\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\t\u0012\b\b\u0002\u0010\f\u001a\u00020\u000b\u0012\b\b\u0003\u0010\u000e\u001a\u00020\r¢\u0006\u0004\b\u000f\u0010\u0010J\u000f\u0010\u0012\u001a\u00020\u0011H\u0017¢\u0006\u0004\b\u0012\u0010\u0013J\u0017\u0010\u0016\u001a\u00020\u00112\u0006\u0010\u0015\u001a\u00020\u0014H\u0007¢\u0006\u0004\b\u0016\u0010\u0017J\"\u0010\u001c\u001a\u00020\u00112\u0006\u0010\u0019\u001a\u00020\u00182\b\b\u0002\u0010\u001b\u001a\u00020\u001aH\u0087@¢\u0006\u0004\b\u001c\u0010\u001dJ\u0017\u0010 \u001a\u00020\u00112\u0006\u0010\u001f\u001a\u00020\u001eH\u0007¢\u0006\u0004\b \u0010!J\u0017\u0010%\u001a\u00020$2\u0006\u0010#\u001a\u00020\"H\u0007¢\u0006\u0004\b%\u0010&R\u0018\u0010\u0004\u001a\u00060\u0002j\u0002`\u00038\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0004\u0010'R\u0014\u0010\u0006\u001a\u00020\u00058\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0006\u0010(R\u0014\u0010\b\u001a\u00020\u00078\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\b\u0010)R\u0016\u0010\n\u001a\u0004\u0018\u00010\t8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\n\u0010*R\u0014\u0010\f\u001a\u00020\u000b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\f\u0010+R\u0014\u0010\u000e\u001a\u00020\r8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u000e\u0010,R\u0014\u0010.\u001a\u00020-8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b.\u0010/RH\u00104\u001a6\u0012\u0004\u0012\u000201\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u00020\u001100j\u0002`38\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b4\u00105RH\u00106\u001a6\u0012\u0004\u0012\u000201\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u00020\u001100j\u0002`38\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b6\u00105RH\u00107\u001a6\u0012\u0004\u0012\u000201\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u00020\u001100j\u0002`38\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b7\u00105RH\u00108\u001a6\u0012\u0004\u0012\u000201\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u00020\u001100j\u0002`38\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b8\u00105R\u001a\u0010:\u001a\b\u0012\u0004\u0012\u00020\u0011098\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b:\u0010;R\u0014\u0010=\u001a\u00020<8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b=\u0010>R\u0018\u0010@\u001a\u0004\u0018\u00010?8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b@\u0010AR\u001c\u0010C\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010?0B8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bC\u0010DR\u0018\u0010F\u001a\u0004\u0018\u00010E8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\bF\u0010GR\u001a\u0010I\u001a\b\u0012\u0004\u0012\u00020\u00110H8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bI\u0010JR\u001d\u0010L\u001a\b\u0012\u0004\u0012\u00020\u00110K8\u0006¢\u0006\f\n\u0004\bL\u0010M\u001a\u0004\bN\u0010OR\u0014\u0010P\u001a\u00020\u00148\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bP\u0010QR\u0016\u0010R\u001a\u00020$8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\bR\u0010SR\u0016\u0010T\u001a\u00020$8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\bT\u0010S¨\u0006V"}, d2 = {"Lapp/rive/RiveCanvasSession;", "Ljava/lang/AutoCloseable;", "Lapp/rive/core/CommandQueue;", "Lapp/rive/core/RiveWorker;", "riveWorker", "Lapp/rive/Artboard;", "artboard", "Lapp/rive/StateMachine;", "stateMachine", "Lapp/rive/ViewModelInstance;", "viewModelInstance", "Lapp/rive/Fit;", "fit", "", "clearColor", "<init>", "(Lapp/rive/core/CommandQueue;Lapp/rive/Artboard;Lapp/rive/StateMachine;Lapp/rive/ViewModelInstance;Lapp/rive/Fit;I)V", "", "close", "()V", "Landroid/graphics/Rect;", "region", "setRegion", "(Landroid/graphics/Rect;)V", "Landroidx/lifecycle/Lifecycle;", "lifecycle", "Lapp/rive/core/FrameTicker;", "ticker", "beginPlaying", "(Landroidx/lifecycle/Lifecycle;Lapp/rive/core/FrameTicker;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "Landroid/graphics/Canvas;", "canvas", "draw", "(Landroid/graphics/Canvas;)V", "Landroid/view/MotionEvent;", "event", "", "onTouchEvent", "(Landroid/view/MotionEvent;)Z", "Lapp/rive/core/CommandQueue;", "Lapp/rive/Artboard;", "Lapp/rive/StateMachine;", "Lapp/rive/ViewModelInstance;", "Lapp/rive/Fit;", "I", "Landroid/graphics/Paint;", "clearPaint", "Landroid/graphics/Paint;", "Lkotlin/Function7;", "Lapp/rive/core/StateMachineHandle;", "", "Lapp/rive/PointerFn;", "pointerDownFn", "Lto/n;", "pointerMoveFn", "pointerUpFn", "pointerExitFn", "Lkotlinx/coroutines/CompletableDeferred;", "closeSignal", "Lkotlinx/coroutines/CompletableDeferred;", "Lapp/rive/core/CloseOnce;", "closer", "Lapp/rive/core/CloseOnce;", "Lapp/rive/HardwareRenderBuffer;", "renderBuffer", "Lapp/rive/HardwareRenderBuffer;", "Lkotlinx/coroutines/flow/MutableStateFlow;", "renderBufferState", "Lkotlinx/coroutines/flow/MutableStateFlow;", "Landroid/graphics/Bitmap;", "latestBitmap", "Landroid/graphics/Bitmap;", "Lkotlinx/coroutines/flow/MutableSharedFlow;", "_frameAvailable", "Lkotlinx/coroutines/flow/MutableSharedFlow;", "Lqr/u;", "frameAvailable", "Lqr/u;", "getFrameAvailable", "()Lqr/u;", "renderRegion", "Landroid/graphics/Rect;", "settled", "Z", "isPlaying", "Companion", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@ExperimentalHardwareBitmapRendering
@SourceDebugExtension({"SMAP\nRiveCanvasSession.kt\nKotlin\n*S Kotlin\n*F\n+ 1 RiveCanvasSession.kt\napp/rive/RiveCanvasSession\n+ 2 RiveLog.kt\napp/rive/RiveLog\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 4 Tracing.kt\napp/rive/core/TracingKt\n*L\n1#1,607:1\n57#2:608\n57#2:609\n53#2:611\n61#2:612\n1#3:610\n12#4,6:613\n12#4,6:619\n12#4,6:625\n*S KotlinDebug\n*F\n+ 1 RiveCanvasSession.kt\napp/rive/RiveCanvasSession\n*L\n137#1:608\n214#1:609\n255#1:611\n272#1:612\n287#1:613,6\n508#1:619,6\n555#1:625,6\n*E\n"})
/* loaded from: classes.dex */
public final class RiveCanvasSession implements AutoCloseable {

    @NotNull
    private static final String TAG = "Rive/CanvasSession";

    @NotNull
    private final MutableSharedFlow _frameAvailable;

    @NotNull
    private final Artboard artboard;
    private final int clearColor;

    @NotNull
    private final Paint clearPaint;

    @NotNull
    private final CompletableDeferred closeSignal;

    @NotNull
    private final CloseOnce closer;

    @NotNull
    private final Fit fit;

    @NotNull
    private final u frameAvailable;
    private boolean isPlaying;
    private Bitmap latestBitmap;

    @NotNull
    private final n pointerDownFn;

    @NotNull
    private final n pointerExitFn;

    @NotNull
    private final n pointerMoveFn;

    @NotNull
    private final n pointerUpFn;
    private HardwareRenderBuffer renderBuffer;

    @NotNull
    private final MutableStateFlow renderBufferState;

    @NotNull
    private final Rect renderRegion;

    @NotNull
    private final CommandQueue riveWorker;
    private boolean settled;

    @NotNull
    private final StateMachine stateMachine;
    private final ViewModelInstance viewModelInstance;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    public static final int $stable = 8;

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\b\u0010\u0005\u001a\u00020\u0006H\u0007R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0007"}, d2 = {"Lapp/rive/RiveCanvasSession$Companion;", "", "()V", "TAG", "", "isSupported", "", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        public final boolean isSupported() {
            return HardwareRenderBuffer.INSTANCE.isSupported();
        }

        private Companion() {
        }
    }

    public RiveCanvasSession(@NotNull CommandQueue riveWorker, @NotNull Artboard artboard, @NotNull StateMachine stateMachine, final ViewModelInstance viewModelInstance, @NotNull Fit fit, int i5) {
        Intrinsics.checkNotNullParameter(riveWorker, "riveWorker");
        Intrinsics.checkNotNullParameter(artboard, "artboard");
        Intrinsics.checkNotNullParameter(stateMachine, "stateMachine");
        Intrinsics.checkNotNullParameter(fit, "fit");
        this.riveWorker = riveWorker;
        this.artboard = artboard;
        this.stateMachine = stateMachine;
        this.viewModelInstance = viewModelInstance;
        this.fit = fit;
        this.clearColor = i5;
        if (!INSTANCE.isSupported()) {
            throw new IllegalStateException("RiveCanvasSession requires API 29+ hardware bitmap support");
        }
        if (!artboard.isOwnedBy$kotlin_release(riveWorker)) {
            throw new IllegalArgumentException("RiveCanvasSession artboard must use the same RiveWorker");
        }
        if (!stateMachine.isOwnedBy$kotlin_release(riveWorker)) {
            throw new IllegalArgumentException("RiveCanvasSession state machine must use the same RiveWorker");
        }
        if (!stateMachine.isFromArtboard$kotlin_release(artboard)) {
            throw new IllegalArgumentException("RiveCanvasSession state machine must be created from the supplied artboard");
        }
        if (viewModelInstance != null && !viewModelInstance.isOwnedBy$kotlin_release(riveWorker)) {
            throw new IllegalArgumentException("RiveCanvasSession view model instance must use the same RiveWorker");
        }
        Function0<String> function0 = new Function0<String>() { // from class: app.rive.RiveCanvasSession.6
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                return h.g("Creating RiveCanvasSession with artboard '", RiveCanvasSession.this.artboard.getName(), "' and state machine '", RiveCanvasSession.this.stateMachine.getName(), "'");
            }
        };
        RiveLog riveLog = RiveLog.INSTANCE;
        riveLog.getLogger().d(TAG, function0);
        Paint paint = new Paint(1);
        paint.setStyle(Paint.Style.FILL);
        paint.setColor(i5);
        this.clearPaint = paint;
        this.pointerDownFn = new RiveCanvasSession$pointerDownFn$1(riveWorker);
        this.pointerMoveFn = new RiveCanvasSession$pointerMoveFn$1(riveWorker);
        this.pointerUpFn = new RiveCanvasSession$pointerUpFn$1(riveWorker);
        this.pointerExitFn = new RiveCanvasSession$pointerExitFn$1(riveWorker);
        this.closeSignal = x.a();
        this.closer = new CloseOnce("RiveCanvasSession", new Function0<Unit>() { // from class: app.rive.RiveCanvasSession$closer$1
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Object invoke() {
                m26invoke();
                return Unit.a;
            }

            /* renamed from: invoke, reason: collision with other method in class */
            public final void m26invoke() {
                CompletableDeferred completableDeferred;
                MutableStateFlow mutableStateFlow;
                HardwareRenderBuffer hardwareRenderBuffer;
                Rect rect;
                completableDeferred = RiveCanvasSession.this.closeSignal;
                completableDeferred.V(Unit.a);
                mutableStateFlow = RiveCanvasSession.this.renderBufferState;
                mutableStateFlow.setValue(null);
                hardwareRenderBuffer = RiveCanvasSession.this.renderBuffer;
                RiveCanvasSession.this.renderBuffer = null;
                if (hardwareRenderBuffer != null) {
                    hardwareRenderBuffer.close();
                }
                RiveCanvasSession.this.latestBitmap = null;
                rect = RiveCanvasSession.this.renderRegion;
                rect.setEmpty();
                RiveCanvasSession.this.settled = false;
                RiveCanvasSession.this.isPlaying = false;
            }
        });
        this.renderBufferState = y.b(null);
        qr.x a = y.a(0, 1, pr.a.f16468e);
        this._frameAvailable = a;
        this.frameAvailable = a;
        this.renderRegion = new Rect();
        if (viewModelInstance != null) {
            riveLog.getLogger().d(TAG, new Function0<String>() { // from class: app.rive.RiveCanvasSession$7$1
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return e.k("Binding view model instance ", ViewModelInstanceHandle.m234toStringimpl(ViewModelInstance.this.getInstanceHandle()));
                }
            });
            riveWorker.m125bindViewModelInstanceeiyHz8(stateMachine.getStateMachineHandle(), viewModelInstance.getInstanceHandle());
        }
    }

    public static /* synthetic */ Object beginPlaying$default(RiveCanvasSession riveCanvasSession, Lifecycle lifecycle, FrameTicker frameTicker, Continuation continuation, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            frameTicker = FrameTickerKt.getChoreographerFrameTicker();
        }
        return riveCanvasSession.beginPlaying(lifecycle, frameTicker, continuation);
    }

    private static final boolean onTouchEvent$containsInRegion(RiveCanvasSession riveCanvasSession, float f2, float f10) {
        Rect rect = riveCanvasSession.renderRegion;
        return f2 >= ((float) rect.left) && f2 < ((float) rect.right) && f10 >= ((float) rect.top) && f10 < ((float) rect.bottom);
    }

    private static final void onTouchEvent$dispatchPointer(MotionEvent motionEvent, RiveCanvasSession riveCanvasSession, float f2, float f10, int i5, n nVar) {
        nVar.invoke(StateMachineHandle.m220boximpl(riveCanvasSession.stateMachine.getStateMachineHandle()), riveCanvasSession.fit, Float.valueOf(f2), Float.valueOf(f10), Integer.valueOf(motionEvent.getPointerId(i5)), Float.valueOf(motionEvent.getX(i5) - riveCanvasSession.renderRegion.left), Float.valueOf(motionEvent.getY(i5) - riveCanvasSession.renderRegion.top));
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x0036  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0022  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object beginPlaying(@NotNull Lifecycle lifecycle, @NotNull FrameTicker frameTicker, @NotNull Continuation continuation) {
        RiveCanvasSession$beginPlaying$1 riveCanvasSession$beginPlaying$1;
        int i5;
        RiveCanvasSession riveCanvasSession;
        if (continuation instanceof RiveCanvasSession$beginPlaying$1) {
            riveCanvasSession$beginPlaying$1 = (RiveCanvasSession$beginPlaying$1) continuation;
            int i6 = riveCanvasSession$beginPlaying$1.label;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                riveCanvasSession$beginPlaying$1.label = i6 - Integer.MIN_VALUE;
                Object obj = riveCanvasSession$beginPlaying$1.result;
                ko.a aVar = ko.a.f13464d;
                i5 = riveCanvasSession$beginPlaying$1.label;
                if (i5 != 0) {
                    b.R(obj);
                    if (this.closer.getClosed()) {
                        throw new IllegalStateException("RiveCanvasSession is closed");
                    }
                    if (this.isPlaying) {
                        throw new IllegalStateException("beginPlaying() is already running for this RiveCanvasSession");
                    }
                    this.isPlaying = true;
                    try {
                        RiveCanvasSession$beginPlaying$4 riveCanvasSession$beginPlaying$4 = new RiveCanvasSession$beginPlaying$4(this, lifecycle, frameTicker, null);
                        riveCanvasSession$beginPlaying$1.L$0 = this;
                        riveCanvasSession$beginPlaying$1.label = 1;
                        if (x.i(riveCanvasSession$beginPlaying$4, riveCanvasSession$beginPlaying$1) == aVar) {
                            return aVar;
                        }
                        riveCanvasSession = this;
                    } catch (Throwable th2) {
                        th = th2;
                        riveCanvasSession = this;
                        riveCanvasSession.isPlaying = false;
                        throw th;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    riveCanvasSession = (RiveCanvasSession) riveCanvasSession$beginPlaying$1.L$0;
                    try {
                        b.R(obj);
                    } catch (Throwable th3) {
                        th = th3;
                        riveCanvasSession.isPlaying = false;
                        throw th;
                    }
                }
                riveCanvasSession.isPlaying = false;
                return Unit.a;
            }
        }
        riveCanvasSession$beginPlaying$1 = new RiveCanvasSession$beginPlaying$1(this, continuation);
        Object obj2 = riveCanvasSession$beginPlaying$1.result;
        ko.a aVar2 = ko.a.f13464d;
        i5 = riveCanvasSession$beginPlaying$1.label;
        if (i5 != 0) {
        }
        riveCanvasSession.isPlaying = false;
        return Unit.a;
    }

    @Override // java.lang.AutoCloseable
    public void close() {
        this.closer.close();
    }

    public final void draw(@NotNull Canvas canvas) {
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        if (this.closer.getClosed()) {
            throw new IllegalStateException("RiveCanvasSession is closed");
        }
        if (!canvas.isHardwareAccelerated()) {
            throw new IllegalArgumentException("RiveCanvasSession requires a hardware-accelerated canvas to draw hardware bitmaps");
        }
        if (this.renderRegion.isEmpty()) {
            return;
        }
        canvas.drawRect(this.renderRegion, this.clearPaint);
        if (this.latestBitmap == null) {
            return;
        }
        Trace.beginSection("Rive/Frame/Present/DrawBitmap");
        try {
            Bitmap bitmap = this.latestBitmap;
            if (bitmap != null) {
                canvas.drawBitmap(bitmap, (Rect) null, this.renderRegion, (Paint) null);
                Unit unit = Unit.a;
            }
        } finally {
            Trace.endSection();
        }
    }

    @NotNull
    public final u getFrameAvailable() {
        return this.frameAvailable;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x00b1  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean onTouchEvent(@NotNull MotionEvent event) {
        RiveCanvasSession riveCanvasSession;
        Intrinsics.checkNotNullParameter(event, "event");
        if (this.closer.getClosed()) {
            throw new IllegalStateException("RiveCanvasSession is closed");
        }
        if (this.renderRegion.isEmpty()) {
            return false;
        }
        float width = this.renderRegion.width();
        float height = this.renderRegion.height();
        Trace.beginSection("Rive/PointerInput");
        try {
            boolean z5 = true;
            try {
                switch (event.getActionMasked()) {
                    case 0:
                    case 5:
                        riveCanvasSession = this;
                        if (onTouchEvent$containsInRegion(this, event.getX(event.getActionIndex()), event.getY(event.getActionIndex()))) {
                            onTouchEvent$dispatchPointer(event, riveCanvasSession, width, height, event.getActionIndex(), riveCanvasSession.pointerDownFn);
                            Trace.endSection();
                            if (z5) {
                                riveCanvasSession.settled = false;
                            }
                            return z5;
                        }
                        z5 = false;
                        Trace.endSection();
                        if (z5) {
                        }
                        return z5;
                    case 1:
                    case 6:
                        riveCanvasSession = this;
                        onTouchEvent$dispatchPointer(event, riveCanvasSession, width, height, event.getActionIndex(), riveCanvasSession.pointerUpFn);
                        onTouchEvent$dispatchPointer(event, riveCanvasSession, width, height, event.getActionIndex(), riveCanvasSession.pointerExitFn);
                        Trace.endSection();
                        if (z5) {
                        }
                        return z5;
                    case 2:
                        riveCanvasSession = this;
                        int pointerCount = event.getPointerCount();
                        for (int i5 = 0; i5 < pointerCount; i5++) {
                            onTouchEvent$dispatchPointer(event, riveCanvasSession, width, height, i5, onTouchEvent$containsInRegion(this, event.getX(i5), event.getY(i5)) ? riveCanvasSession.pointerMoveFn : riveCanvasSession.pointerExitFn);
                        }
                        Trace.endSection();
                        if (z5) {
                        }
                        return z5;
                    case 3:
                    case 4:
                        int pointerCount2 = event.getPointerCount();
                        int i6 = 0;
                        while (i6 < pointerCount2) {
                            MotionEvent motionEvent = event;
                            onTouchEvent$dispatchPointer(motionEvent, this, width, height, i6, this.pointerExitFn);
                            i6++;
                            event = motionEvent;
                        }
                        riveCanvasSession = this;
                        Trace.endSection();
                        if (z5) {
                        }
                        return z5;
                    default:
                        riveCanvasSession = this;
                        z5 = false;
                        Trace.endSection();
                        if (z5) {
                        }
                        return z5;
                }
            } catch (Throwable th2) {
                th = th2;
                Throwable th3 = th;
                Trace.endSection();
                throw th3;
            }
        } catch (Throwable th4) {
            th = th4;
        }
    }

    public final void setRegion(@NotNull final Rect region) {
        Intrinsics.checkNotNullParameter(region, "region");
        if (this.closer.getClosed()) {
            throw new IllegalStateException("RiveCanvasSession is closed");
        }
        if (region.width() < 0 || region.height() < 0) {
            throw new IllegalArgumentException(("Region must have non-negative dimensions: " + region).toString());
        }
        int width = region.width();
        int height = region.height();
        if (width == 0 || height == 0) {
            if (Intrinsics.areEqual(this.renderRegion, region) && this.renderBuffer == null && this.latestBitmap == null) {
                return;
            }
            RiveLog.INSTANCE.getLogger().v(TAG, new Function0<String>() { // from class: app.rive.RiveCanvasSession$setRegion$3
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return "Render region has a 0 dimension: " + region + "; clearing render state";
                }
            });
            this.renderRegion.set(region);
            this.renderBufferState.setValue(null);
            HardwareRenderBuffer hardwareRenderBuffer = this.renderBuffer;
            this.renderBuffer = null;
            if (hardwareRenderBuffer != null) {
                hardwareRenderBuffer.close();
            }
            this.latestBitmap = null;
            this.settled = false;
            return;
        }
        if (Intrinsics.areEqual(this.renderRegion, region)) {
            return;
        }
        boolean z5 = (this.renderRegion.width() == width && this.renderRegion.height() == height) ? false : true;
        if (z5) {
            RiveLog.INSTANCE.getLogger().i(TAG, new Function0<String>() { // from class: app.rive.RiveCanvasSession$setRegion$5
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return "Updating render region to " + region + "; recreating render buffer and unsettling state machine";
                }
            });
        }
        HardwareRenderBuffer hardwareRenderBuffer2 = this.renderBuffer;
        HardwareRenderBuffer hardwareRenderBuffer3 = z5 ? new HardwareRenderBuffer(width, height, this.riveWorker) : hardwareRenderBuffer2;
        this.renderBuffer = hardwareRenderBuffer3;
        this.renderBufferState.setValue(hardwareRenderBuffer3);
        this.renderRegion.set(region);
        if (z5) {
            if (this.fit instanceof Fit.Layout) {
                Trace.beginSection("Rive/Layout/ResizeArtboard");
                if (hardwareRenderBuffer3 != null) {
                    try {
                        this.artboard.resizeArtboard(hardwareRenderBuffer3.getSurface(), this.fit.getScaleFactor());
                        Unit unit = Unit.a;
                    } finally {
                        Trace.endSection();
                    }
                }
            }
            this.settled = false;
            this.latestBitmap = null;
        }
        if (hardwareRenderBuffer2 == null || hardwareRenderBuffer2 == hardwareRenderBuffer3) {
            return;
        }
        hardwareRenderBuffer2.close();
    }

    public /* synthetic */ RiveCanvasSession(CommandQueue commandQueue, Artboard artboard, StateMachine stateMachine, ViewModelInstance viewModelInstance, Fit fit, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(commandQueue, artboard, stateMachine, (i6 & 8) != 0 ? null : viewModelInstance, (i6 & 16) != 0 ? RenderingDefaults.INSTANCE.defaultFit() : fit, (i6 & 32) != 0 ? 0 : i5);
    }
}
