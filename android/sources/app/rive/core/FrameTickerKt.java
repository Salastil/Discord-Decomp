package app.rive.core;

import android.view.Choreographer;
import fo.q;
import ki.b;
import ko.f;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CancellableContinuation;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import nr.j;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0016\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\u0010\t\n\u0002\b\u0002\u001a(\u0010\u0006\u001a\u0002H\u0007\"\u0004\b\u0000\u0010\u00072\u0012\u0010\b\u001a\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u0002H\u00070\tH\u0086@¢\u0006\u0002\u0010\u000b\"\u0011\u0010\u0000\u001a\u00020\u0001¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\u0003\"\u0011\u0010\u0004\u001a\u00020\u0001¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0003¨\u0006\f"}, d2 = {"ChoreographerFrameTicker", "Lapp/rive/core/FrameTicker;", "getChoreographerFrameTicker", "()Lapp/rive/core/FrameTicker;", "ComposeFrameTicker", "getComposeFrameTicker", "withFrameNanosChoreographer", "R", "onFrame", "Lkotlin/Function1;", "", "(Lkotlin/jvm/functions/Function1;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "kotlin_release"}, k = 2, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nFrameTicker.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FrameTicker.kt\napp/rive/core/FrameTickerKt\n+ 2 CancellableContinuation.kt\nkotlinx/coroutines/CancellableContinuationKt\n*L\n1#1,49:1\n318#2,11:50\n*S KotlinDebug\n*F\n+ 1 FrameTicker.kt\napp/rive/core/FrameTickerKt\n*L\n37#1:50,11\n*E\n"})
/* loaded from: classes.dex */
public final class FrameTickerKt {

    @NotNull
    private static final FrameTicker ChoreographerFrameTicker = new FrameTicker() { // from class: app.rive.core.FrameTickerKt$ChoreographerFrameTicker$1
        @Override // app.rive.core.FrameTicker
        public final Object withFrame(@NotNull final Function1<? super Long, Unit> function1, @NotNull Continuation continuation) {
            Object withFrameNanosChoreographer = FrameTickerKt.withFrameNanosChoreographer(new Function1<Long, Unit>() { // from class: app.rive.core.FrameTickerKt$ChoreographerFrameTicker$1.1
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                /* JADX WARN: Multi-variable type inference failed */
                {
                    super(1);
                }

                @Override // kotlin.jvm.functions.Function1
                public /* bridge */ /* synthetic */ Object invoke(Object obj) {
                    invoke(((Number) obj).longValue());
                    return Unit.a;
                }

                public final void invoke(long j) {
                    function1.invoke(Long.valueOf(j));
                }
            }, continuation);
            return withFrameNanosChoreographer == ko.a.f13464d ? withFrameNanosChoreographer : Unit.a;
        }
    };

    @NotNull
    private static final FrameTicker ComposeFrameTicker = new FrameTicker() { // from class: app.rive.core.FrameTickerKt$ComposeFrameTicker$1

        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
        @d(c = "app.rive.core.FrameTickerKt$ComposeFrameTicker$1$1", f = "FrameTicker.kt", l = {24}, m = "invokeSuspend")
        /* renamed from: app.rive.core.FrameTickerKt$ComposeFrameTicker$1$1, reason: invalid class name */
        public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
            final /* synthetic */ Function1<Long, Unit> $onFrame;
            int label;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            /* JADX WARN: Multi-variable type inference failed */
            public AnonymousClass1(Function1<? super Long, Unit> function1, Continuation continuation) {
                super(2, continuation);
                this.$onFrame = function1;
            }

            @Override // lo.a
            @NotNull
            public final Continuation create(Object obj, @NotNull Continuation continuation) {
                return new AnonymousClass1(this.$onFrame, continuation);
            }

            @Override // lo.a
            public final Object invokeSuspend(@NotNull Object obj) {
                ko.a aVar = ko.a.f13464d;
                int i5 = this.label;
                if (i5 == 0) {
                    b.R(obj);
                    final Function1<Long, Unit> function1 = this.$onFrame;
                    Function1<Long, Unit> function12 = new Function1<Long, Unit>() { // from class: app.rive.core.FrameTickerKt.ComposeFrameTicker.1.1.1
                        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                        /* JADX WARN: Multi-variable type inference failed */
                        {
                            super(1);
                        }

                        @Override // kotlin.jvm.functions.Function1
                        public /* bridge */ /* synthetic */ Object invoke(Object obj2) {
                            invoke(((Number) obj2).longValue());
                            return Unit.a;
                        }

                        public final void invoke(long j) {
                            function1.invoke(Long.valueOf(j));
                        }
                    };
                    this.label = 1;
                    if (ta.a.L(function12, this) == aVar) {
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
                return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
            }
        }

        @Override // app.rive.core.FrameTicker
        public final Object withFrame(@NotNull Function1<? super Long, Unit> function1, @NotNull Continuation continuation) {
            Object A = x.A((CoroutineContext) j0.d.J.getValue(), new AnonymousClass1(function1, null), continuation);
            return A == ko.a.f13464d ? A : Unit.a;
        }
    };

    @NotNull
    public static final FrameTicker getChoreographerFrameTicker() {
        return ChoreographerFrameTicker;
    }

    @NotNull
    public static final FrameTicker getComposeFrameTicker() {
        return ComposeFrameTicker;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0033  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <R> Object withFrameNanosChoreographer(@NotNull Function1<? super Long, ? extends R> function1, @NotNull Continuation continuation) {
        FrameTickerKt$withFrameNanosChoreographer$1 frame;
        int i5;
        if (continuation instanceof FrameTickerKt$withFrameNanosChoreographer$1) {
            frame = (FrameTickerKt$withFrameNanosChoreographer$1) continuation;
            int i6 = frame.label;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                frame.label = i6 - Integer.MIN_VALUE;
                Object obj = frame.result;
                ko.a aVar = ko.a.f13464d;
                i5 = frame.label;
                if (i5 != 0) {
                    b.R(obj);
                    frame.L$0 = function1;
                    frame.label = 1;
                    final j jVar = new j(1, f.b(frame));
                    jVar.t();
                    final Choreographer choreographer = Choreographer.getInstance();
                    final Choreographer.FrameCallback frameCallback = new Choreographer.FrameCallback() { // from class: app.rive.core.FrameTickerKt$withFrameNanosChoreographer$frameTimeNs$1$onFrameCallback$1
                        @Override // android.view.Choreographer.FrameCallback
                        public final void doFrame(long j) {
                            Long valueOf = Long.valueOf(j);
                            CancellableContinuation cancellableContinuation = CancellableContinuation.this;
                            q qVar = Result.f13476e;
                            cancellableContinuation.resumeWith(valueOf);
                        }
                    };
                    choreographer.postFrameCallback(frameCallback);
                    jVar.v(new Function1<Throwable, Unit>() { // from class: app.rive.core.FrameTickerKt$withFrameNanosChoreographer$frameTimeNs$1$1
                        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                        {
                            super(1);
                        }

                        @Override // kotlin.jvm.functions.Function1
                        public /* bridge */ /* synthetic */ Object invoke(Object obj2) {
                            invoke((Throwable) obj2);
                            return Unit.a;
                        }

                        public final void invoke(Throwable th2) {
                            choreographer.removeFrameCallback(frameCallback);
                        }
                    });
                    obj = jVar.r();
                    if (obj == aVar) {
                        Intrinsics.checkNotNullParameter(frame, "frame");
                    }
                    if (obj == aVar) {
                        return aVar;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    function1 = (Function1) frame.L$0;
                    b.R(obj);
                }
                return function1.invoke(new Long(((Number) obj).longValue()));
            }
        }
        frame = new FrameTickerKt$withFrameNanosChoreographer$1(continuation);
        Object obj2 = frame.result;
        ko.a aVar2 = ko.a.f13464d;
        i5 = frame.label;
        if (i5 != 0) {
        }
        return function1.invoke(new Long(((Number) obj2).longValue()));
    }
}
