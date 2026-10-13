package app.rive;

import androidx.lifecycle.Lifecycle;
import app.rive.core.FrameTicker;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;
import lo.d;
import lo.h;
import nr.l1;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RiveCanvasSession$beginPlaying$4", f = "RiveCanvasSession.kt", l = {468, 470, 471, 472, 473, 470, 471, 472, 473}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class RiveCanvasSession$beginPlaying$4 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Lifecycle $lifecycle;
    final /* synthetic */ FrameTicker $ticker;
    private /* synthetic */ Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    int label;
    final /* synthetic */ RiveCanvasSession this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveCanvasSession$beginPlaying$4(RiveCanvasSession riveCanvasSession, Lifecycle lifecycle, FrameTicker frameTicker, Continuation continuation) {
        super(2, continuation);
        this.this$0 = riveCanvasSession;
        this.$lifecycle = lifecycle;
        this.$ticker = frameTicker;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        RiveCanvasSession$beginPlaying$4 riveCanvasSession$beginPlaying$4 = new RiveCanvasSession$beginPlaying$4(this.this$0, this.$lifecycle, this.$ticker, continuation);
        riveCanvasSession$beginPlaying$4.L$0 = obj;
        return riveCanvasSession$beginPlaying$4;
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x0179, code lost:
    
        if (nr.x.g(r4, r11) != r0) goto L58;
     */
    /* JADX WARN: Code restructure failed: missing block: B:29:0x0137, code lost:
    
        if (nr.x.g(r1, r11) == r0) goto L61;
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x0128, code lost:
    
        if (nr.x.g(r2, r11) != r0) goto L39;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:22:0x016a  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x011b  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0108  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0155  */
    /* JADX WARN: Type inference failed for: r4v17, types: [kotlinx.coroutines.Job] */
    /* JADX WARN: Type inference failed for: r5v9, types: [kotlinx.coroutines.Job] */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(@NotNull Object obj) {
        Job t5;
        ViewModelInstance viewModelInstance;
        Job t10;
        Job job;
        Throwable th2;
        Job job2;
        l1 l1Var;
        l1 l1Var2;
        Throwable th3;
        l1 l1Var3;
        Job job3;
        Job job4;
        Job job5;
        Job job6;
        Job job7;
        Job job8;
        Job job9;
        Throwable th4;
        ko.a aVar = ko.a.f13464d;
        switch (this.label) {
            case 0:
                b.R(obj);
                CoroutineScope coroutineScope = (CoroutineScope) this.L$0;
                t5 = x.t(coroutineScope, null, new RiveCanvasSession$beginPlaying$4$settledCollector$1(this.this$0, null), 3);
                viewModelInstance = this.this$0.viewModelInstance;
                l1 t11 = viewModelInstance != null ? x.t(coroutineScope, null, new RiveCanvasSession$beginPlaying$4$viewModelDirtyCollector$1(this.this$0, null), 3) : null;
                t10 = x.t(coroutineScope, null, new RiveCanvasSession$beginPlaying$4$frameAvailableCollector$1(this.this$0, null), 3);
                l1 t12 = x.t(coroutineScope, null, new RiveCanvasSession$beginPlaying$4$renderLoop$1(this.$lifecycle, this.this$0, this.$ticker, null), 3);
                l1 t13 = x.t(coroutineScope, null, new RiveCanvasSession$beginPlaying$4$closeWatcher$1(this.this$0, t12, null), 3);
                try {
                    this.L$0 = t5;
                    this.L$1 = t11;
                    this.L$2 = t10;
                    this.L$3 = t13;
                    this.label = 1;
                    if (t12.X(this) != aVar) {
                        l1Var2 = t11;
                        job = t13;
                        this.L$0 = t5;
                        this.L$1 = l1Var2;
                        this.L$2 = t10;
                        this.L$3 = null;
                        this.label = 2;
                        if (x.g(job, this) != aVar) {
                            job4 = t10;
                            job5 = l1Var2;
                            job6 = t5;
                            this.L$0 = job6;
                            this.L$1 = job5;
                            this.L$2 = null;
                            this.label = 3;
                            if (x.g(job4, this) != aVar) {
                                job7 = job5;
                                job8 = job6;
                                this.L$0 = job7;
                                this.L$1 = null;
                                this.label = 4;
                                break;
                            }
                        }
                    }
                } catch (Throwable th5) {
                    l1 l1Var4 = t11;
                    job = t13;
                    th2 = th5;
                    job2 = t10;
                    l1Var = l1Var4;
                    this.L$0 = t5;
                    this.L$1 = l1Var;
                    this.L$2 = job2;
                    this.L$3 = th2;
                    this.label = 6;
                    if (x.g(job, this) != aVar) {
                        th3 = th2;
                        l1Var3 = l1Var;
                        job3 = t5;
                        this.L$0 = job3;
                        this.L$1 = l1Var3;
                        this.L$2 = th3;
                        this.L$3 = null;
                        this.label = 7;
                        if (x.g(job2, this) != aVar) {
                        }
                    }
                    return aVar;
                }
                return aVar;
            case 1:
                job = (Job) this.L$3;
                t10 = (Job) this.L$2;
                ?? r5 = (Job) this.L$1;
                t5 = (Job) this.L$0;
                try {
                    b.R(obj);
                    l1Var2 = r5;
                    this.L$0 = t5;
                    this.L$1 = l1Var2;
                    this.L$2 = t10;
                    this.L$3 = null;
                    this.label = 2;
                    if (x.g(job, this) != aVar) {
                    }
                } catch (Throwable th6) {
                    th2 = th6;
                    job2 = t10;
                    l1Var = r5;
                    this.L$0 = t5;
                    this.L$1 = l1Var;
                    this.L$2 = job2;
                    this.L$3 = th2;
                    this.label = 6;
                    if (x.g(job, this) != aVar) {
                    }
                    return aVar;
                }
                return aVar;
            case 2:
                job4 = (Job) this.L$2;
                job5 = (Job) this.L$1;
                job6 = (Job) this.L$0;
                b.R(obj);
                this.L$0 = job6;
                this.L$1 = job5;
                this.L$2 = null;
                this.label = 3;
                if (x.g(job4, this) != aVar) {
                }
                return aVar;
            case 3:
                job7 = (Job) this.L$1;
                job8 = (Job) this.L$0;
                b.R(obj);
                this.L$0 = job7;
                this.L$1 = null;
                this.label = 4;
                break;
            case 4:
                job7 = (Job) this.L$0;
                b.R(obj);
                if (job7 != null) {
                    this.L$0 = null;
                    this.label = 5;
                    break;
                }
                return Unit.a;
            case 5:
                b.R(obj);
                return Unit.a;
            case 6:
                th3 = (Throwable) this.L$3;
                job2 = (Job) this.L$2;
                ?? r42 = (Job) this.L$1;
                Job job10 = (Job) this.L$0;
                b.R(obj);
                l1Var3 = r42;
                job3 = job10;
                this.L$0 = job3;
                this.L$1 = l1Var3;
                this.L$2 = th3;
                this.L$3 = null;
                this.label = 7;
                if (x.g(job2, this) != aVar) {
                    job9 = l1Var3;
                    this.L$0 = job9;
                    this.L$1 = th3;
                    this.L$2 = null;
                    this.label = 8;
                    break;
                }
                return aVar;
            case 7:
                th3 = (Throwable) this.L$2;
                job9 = (Job) this.L$1;
                job3 = (Job) this.L$0;
                b.R(obj);
                this.L$0 = job9;
                this.L$1 = th3;
                this.L$2 = null;
                this.label = 8;
                break;
            case 8:
                th3 = (Throwable) this.L$1;
                job9 = (Job) this.L$0;
                b.R(obj);
                if (job9 == null) {
                    throw th3;
                }
                this.L$0 = th3;
                this.L$1 = null;
                this.label = 9;
                if (x.g(job9, this) != aVar) {
                    th4 = th3;
                    throw th4;
                }
                return aVar;
            case 9:
                th4 = (Throwable) this.L$0;
                b.R(obj);
                throw th4;
            default:
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
        return ((RiveCanvasSession$beginPlaying$4) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
