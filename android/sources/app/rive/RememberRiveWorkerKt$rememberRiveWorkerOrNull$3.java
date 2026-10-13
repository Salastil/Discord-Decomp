package app.rive;

import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.k0;
import app.rive.core.AudioEngine;
import app.rive.core.CommandQueue;
import com.discord.media.engine.MediaEngine;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RememberRiveWorkerKt$rememberRiveWorkerOrNull$3", f = "rememberRiveWorker.kt", l = {MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class RememberRiveWorkerKt$rememberRiveWorkerOrNull$3 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ LifecycleOwner $lifecycleOwner;
    final /* synthetic */ CommandQueue $worker;
    int label;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
    @d(c = "app.rive.RememberRiveWorkerKt$rememberRiveWorkerOrNull$3$1", f = "rememberRiveWorker.kt", l = {118}, m = "invokeSuspend")
    /* renamed from: app.rive.RememberRiveWorkerKt$rememberRiveWorkerOrNull$3$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        int label;

        public AnonymousClass1(Continuation continuation) {
            super(2, continuation);
        }

        @Override // lo.a
        @NotNull
        public final Continuation create(Object obj, @NotNull Continuation continuation) {
            return new AnonymousClass1(continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(@NotNull Object obj) {
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            try {
                if (i5 != 0) {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    b.R(obj);
                    throw new fo.h();
                }
                b.R(obj);
                AudioEngine.INSTANCE.acquire();
                this.label = 1;
                x.e(this);
                return aVar;
            } catch (Throwable th2) {
                AudioEngine.INSTANCE.release();
                throw th2;
            }
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RememberRiveWorkerKt$rememberRiveWorkerOrNull$3(CommandQueue commandQueue, LifecycleOwner lifecycleOwner, Continuation continuation) {
        super(2, continuation);
        this.$worker = commandQueue;
        this.$lifecycleOwner = lifecycleOwner;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        return new RememberRiveWorkerKt$rememberRiveWorkerOrNull$3(this.$worker, this.$lifecycleOwner, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            if (this.$worker == null) {
                return Unit.a;
            }
            Lifecycle lifecycle = this.$lifecycleOwner.getLifecycle();
            Lifecycle.State state = Lifecycle.State.f2141w;
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(null);
            this.label = 1;
            if (k0.a(lifecycle, state, anonymousClass1, this) == aVar) {
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
        return ((RememberRiveWorkerKt$rememberRiveWorkerOrNull$3) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
