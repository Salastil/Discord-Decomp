package app.rive;

import app.rive.RiveFileSource;
import com.facebook.imagepipeline.nativecode.c;
import java.io.InputStream;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0012\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RiveFile$Companion$fromSource$fileBytes$1", f = "RiveFile.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nRiveFile.kt\nKotlin\n*S Kotlin\n*F\n+ 1 RiveFile.kt\napp/rive/RiveFile$Companion$fromSource$fileBytes$1\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,222:1\n1#2:223\n*E\n"})
/* loaded from: classes.dex */
public final class RiveFile$Companion$fromSource$fileBytes$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ RiveFileSource $source;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveFile$Companion$fromSource$fileBytes$1(RiveFileSource riveFileSource, Continuation continuation) {
        super(2, continuation);
        this.$source = riveFileSource;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        return new RiveFile$Companion$fromSource$fileBytes$1(this.$source, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        InputStream openRawResource = ((RiveFileSource.RawRes) this.$source).getResources().openRawResource(((RiveFileSource.RawRes) this.$source).getResId());
        try {
            Intrinsics.checkNotNull(openRawResource);
            byte[] E = com.facebook.imagepipeline.nativecode.b.E(openRawResource);
            c.j(openRawResource, null);
            return E;
        } finally {
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
        return ((RiveFile$Companion$fromSource$fileBytes$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
