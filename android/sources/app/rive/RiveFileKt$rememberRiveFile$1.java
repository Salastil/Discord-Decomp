package app.rive;

import app.rive.Result;
import app.rive.RiveFile;
import app.rive.core.CommandQueue;
import com.facebook.imageutils.JfifUtil;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import lo.d;
import lo.h;
import org.jetbrains.annotations.NotNull;
import u.o;
import u.q;

@Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\u0010\u0004\u001a\u00020\u0003*\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00020\u00010\u0000H\u008a@¢\u0006\u0004\b\u0004\u0010\u0005"}, d2 = {"Lu/o;", "Lapp/rive/Result;", "Lapp/rive/RiveFile;", "", "<anonymous>", "(Lu/o;)V"}, k = 3, mv = {1, 9, 0})
@d(c = "app.rive.RiveFileKt$rememberRiveFile$1", f = "RiveFile.kt", l = {211, JfifUtil.MARKER_RST7}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class RiveFileKt$rememberRiveFile$1 extends h implements Function2<o, Continuation, Object> {
    final /* synthetic */ CommandQueue $riveWorker;
    final /* synthetic */ RiveFileSource $source;
    private /* synthetic */ Object L$0;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveFileKt$rememberRiveFile$1(RiveFileSource riveFileSource, CommandQueue commandQueue, Continuation continuation) {
        super(2, continuation);
        this.$source = riveFileSource;
        this.$riveWorker = commandQueue;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        RiveFileKt$rememberRiveFile$1 riveFileKt$rememberRiveFile$1 = new RiveFileKt$rememberRiveFile$1(this.$source, this.$riveWorker, continuation);
        riveFileKt$rememberRiveFile$1.L$0 = obj;
        return riveFileKt$rememberRiveFile$1;
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        o oVar;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            oVar = (o) this.L$0;
            RiveFile.Companion companion = RiveFile.INSTANCE;
            RiveFileSource riveFileSource = this.$source;
            CommandQueue commandQueue = this.$riveWorker;
            this.L$0 = oVar;
            this.label = 1;
            obj = companion.fromSource(riveFileSource, commandQueue, this);
            if (obj == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                if (i5 != 2) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                b.R(obj);
                throw new fo.h();
            }
            oVar = (o) this.L$0;
            b.R(obj);
        }
        final Result result = (Result) obj;
        q qVar = (q) oVar;
        qVar.setValue(result);
        if (!(result instanceof Result.Success)) {
            return Unit.a;
        }
        Function0<Unit> function0 = new Function0<Unit>() { // from class: app.rive.RiveFileKt$rememberRiveFile$1.1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Object invoke() {
                m33invoke();
                return Unit.a;
            }

            /* renamed from: invoke, reason: collision with other method in class */
            public final void m33invoke() {
                ((RiveFile) ((Result.Success) result).getValue()).close();
            }
        };
        this.L$0 = null;
        this.label = 2;
        qVar.a(function0, this);
        return aVar;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(@NotNull o oVar, Continuation continuation) {
        return ((RiveFileKt$rememberRiveFile$1) create(oVar, continuation)).invokeSuspend(Unit.a);
    }
}
