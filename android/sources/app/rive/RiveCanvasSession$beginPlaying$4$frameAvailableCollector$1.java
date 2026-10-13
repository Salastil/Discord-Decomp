package app.rive;

import android.graphics.Bitmap;
import android.os.Trace;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.FlowCollector;
import kotlinx.coroutines.flow.MutableSharedFlow;
import kotlinx.coroutines.flow.MutableStateFlow;
import lo.d;
import lo.h;
import org.jetbrains.annotations.NotNull;
import qr.u;
import qr.y;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RiveCanvasSession$beginPlaying$4$frameAvailableCollector$1", f = "RiveCanvasSession.kt", l = {373}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class RiveCanvasSession$beginPlaying$4$frameAvailableCollector$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    int label;
    final /* synthetic */ RiveCanvasSession this$0;

    @Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u00012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003H\u008a@"}, d2 = {"<anonymous>", "", "activeBuffer", "Lapp/rive/HardwareRenderBuffer;"}, k = 3, mv = {1, 9, 0}, xi = 48)
    @d(c = "app.rive.RiveCanvasSession$beginPlaying$4$frameAvailableCollector$1$1", f = "RiveCanvasSession.kt", l = {375}, m = "invokeSuspend")
    /* renamed from: app.rive.RiveCanvasSession$beginPlaying$4$frameAvailableCollector$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<HardwareRenderBuffer, Continuation, Object> {
        /* synthetic */ Object L$0;
        int label;
        final /* synthetic */ RiveCanvasSession this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(RiveCanvasSession riveCanvasSession, Continuation continuation) {
            super(2, continuation);
            this.this$0 = riveCanvasSession;
        }

        @Override // lo.a
        @NotNull
        public final Continuation create(Object obj, @NotNull Continuation continuation) {
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.this$0, continuation);
            anonymousClass1.L$0 = obj;
            return anonymousClass1;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(HardwareRenderBuffer hardwareRenderBuffer, Continuation continuation) {
            return ((AnonymousClass1) create(hardwareRenderBuffer, continuation)).invokeSuspend(Unit.a);
        }

        @Override // lo.a
        public final Object invokeSuspend(@NotNull Object obj) {
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 == 0) {
                b.R(obj);
                final HardwareRenderBuffer hardwareRenderBuffer = (HardwareRenderBuffer) this.L$0;
                if (hardwareRenderBuffer == null) {
                    return Unit.a;
                }
                u frameAvailable = hardwareRenderBuffer.getFrameAvailable();
                final RiveCanvasSession riveCanvasSession = this.this$0;
                FlowCollector flowCollector = new FlowCollector() { // from class: app.rive.RiveCanvasSession.beginPlaying.4.frameAvailableCollector.1.1.1
                    @Override // kotlinx.coroutines.flow.FlowCollector
                    public final Object emit(@NotNull Unit unit, @NotNull Continuation continuation) {
                        Bitmap bitmap;
                        MutableSharedFlow mutableSharedFlow;
                        RiveCanvasSession riveCanvasSession2 = RiveCanvasSession.this;
                        HardwareRenderBuffer hardwareRenderBuffer2 = hardwareRenderBuffer;
                        Trace.beginSection("Rive/CanvasSession/PublishLatestBitmap");
                        try {
                            Trace.beginSection("Rive/CanvasSession/ToBitmap");
                            try {
                                Bitmap consumeLatestBitmap = hardwareRenderBuffer2.consumeLatestBitmap();
                                if (consumeLatestBitmap != null) {
                                    bitmap = riveCanvasSession2.latestBitmap;
                                    if (bitmap != consumeLatestBitmap) {
                                        riveCanvasSession2.latestBitmap = consumeLatestBitmap;
                                        mutableSharedFlow = riveCanvasSession2._frameAvailable;
                                        mutableSharedFlow.d(Unit.a);
                                    }
                                }
                                Unit unit2 = Unit.a;
                                Trace.endSection();
                                return Unit.a;
                            } finally {
                                Trace.endSection();
                            }
                        } catch (Throwable th2) {
                            throw th2;
                        }
                    }
                };
                this.label = 1;
                if (frameAvailable.collect(flowCollector, this) == aVar) {
                    return aVar;
                }
            } else {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                b.R(obj);
            }
            throw new fo.h();
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveCanvasSession$beginPlaying$4$frameAvailableCollector$1(RiveCanvasSession riveCanvasSession, Continuation continuation) {
        super(2, continuation);
        this.this$0 = riveCanvasSession;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        return new RiveCanvasSession$beginPlaying$4$frameAvailableCollector$1(this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        MutableStateFlow mutableStateFlow;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            mutableStateFlow = this.this$0.renderBufferState;
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.this$0, null);
            this.label = 1;
            if (y.f(mutableStateFlow, anonymousClass1, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
        return ((RiveCanvasSession$beginPlaying$4$frameAvailableCollector$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
