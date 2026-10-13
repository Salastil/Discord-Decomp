package app.rive;

import app.rive.Result;
import app.rive.core.CommandQueue;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import lo.d;
import lo.h;
import org.jetbrains.annotations.NotNull;
import u.o;
import u.q;

@Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\u0010\u0006\u001a\u00020\u0005\"\u000e\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u00028\u00010\u0000\"\u0004\b\u0001\u0010\u0002*\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00028\u00000\u00040\u0003H\u008a@¢\u0006\u0004\b\u0006\u0010\u0007"}, d2 = {"Lapp/rive/Asset;", "T", "H", "Lu/o;", "Lapp/rive/Result;", "", "<anonymous>", "(Lu/o;)V"}, k = 3, mv = {1, 9, 0})
@d(c = "app.rive.AssetsKt$rememberAsset$1", f = "Assets.kt", l = {415, 423}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class AssetsKt$rememberAsset$1 extends h implements Function2<o, Continuation, Object> {
    final /* synthetic */ byte[] $bytes;
    final /* synthetic */ Function3 $constructFn;
    final /* synthetic */ String $key;
    final /* synthetic */ CommandQueue $riveWorker;
    private /* synthetic */ Object L$0;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public AssetsKt$rememberAsset$1(Function3 function3, CommandQueue commandQueue, byte[] bArr, String str, Continuation continuation) {
        super(2, continuation);
        this.$constructFn = function3;
        this.$riveWorker = commandQueue;
        this.$bytes = bArr;
        this.$key = str;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        AssetsKt$rememberAsset$1 assetsKt$rememberAsset$1 = new AssetsKt$rememberAsset$1(this.$constructFn, this.$riveWorker, this.$bytes, this.$key, continuation);
        assetsKt$rememberAsset$1.L$0 = obj;
        return assetsKt$rememberAsset$1;
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        o oVar;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            oVar = (o) this.L$0;
            Function3 function3 = this.$constructFn;
            CommandQueue commandQueue = this.$riveWorker;
            byte[] bArr = this.$bytes;
            this.L$0 = oVar;
            this.label = 1;
            obj = function3.invoke(commandQueue, bArr, this);
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
        if (this.$key != null && (result instanceof Result.Success)) {
            ((Asset) ((Result.Success) result).getValue()).register(this.$key);
        }
        q qVar = (q) oVar;
        qVar.setValue(result);
        final String str = this.$key;
        Function0<Unit> function0 = new Function0<Unit>() { // from class: app.rive.AssetsKt$rememberAsset$1.1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            /* JADX WARN: Multi-variable type inference failed */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Object invoke() {
                m10invoke();
                return Unit.a;
            }

            /* renamed from: invoke, reason: collision with other method in class */
            public final void m10invoke() {
                Object obj2 = result;
                if (obj2 instanceof Result.Success) {
                    if (str != null) {
                        ((Asset) ((Result.Success) obj2).getValue()).unregister(str);
                    }
                    ((Asset) ((Result.Success) result).getValue()).close();
                }
            }
        };
        this.L$0 = null;
        this.label = 2;
        qVar.a(function0, this);
        return aVar;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(@NotNull o oVar, Continuation continuation) {
        return ((AssetsKt$rememberAsset$1) create(oVar, continuation)).invokeSuspend(Unit.a);
    }
}
