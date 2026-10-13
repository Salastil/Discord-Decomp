package app.rive;

import a3.e;
import android.os.Trace;
import app.rive.Fit;
import app.rive.core.RiveSurface;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import org.jetbrains.annotations.NotNull;
import u.k;
import u.l;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RiveKt$Rive$6", f = "Rive.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nRive.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Rive.kt\napp/rive/RiveKt$Rive$6\n+ 2 Tracing.kt\napp/rive/core/TracingKt\n+ 3 RiveLog.kt\napp/rive/RiveLog\n*L\n1#1,521:1\n12#2,3:522\n16#2,2:526\n12#2,3:528\n16#2,2:532\n57#3:525\n57#3:531\n*S KotlinDebug\n*F\n+ 1 Rive.kt\napp/rive/RiveKt$Rive$6\n*L\n275#1:522,3\n275#1:526,2\n282#1:528,3\n282#1:532,2\n276#1:525\n283#1:531\n*E\n"})
/* loaded from: classes.dex */
public final class RiveKt$Rive$6 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Artboard $artboardToUse;
    final /* synthetic */ Fit $fit;
    final /* synthetic */ l $surface$delegate;
    final /* synthetic */ k $surfaceHeight$delegate;
    final /* synthetic */ k $surfaceWidth$delegate;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveKt$Rive$6(Fit fit, l lVar, Artboard artboard, k kVar, k kVar2, Continuation continuation) {
        super(2, continuation);
        this.$fit = fit;
        this.$surface$delegate = lVar;
        this.$artboardToUse = artboard;
        this.$surfaceWidth$delegate = kVar;
        this.$surfaceHeight$delegate = kVar2;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        return new RiveKt$Rive$6(this.$fit, this.$surface$delegate, this.$artboardToUse, this.$surfaceWidth$delegate, this.$surfaceHeight$delegate, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        RiveSurface Rive$lambda$4;
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        Rive$lambda$4 = RiveKt.Rive$lambda$4(this.$surface$delegate);
        if (Rive$lambda$4 == null) {
            return Unit.a;
        }
        Fit fit = this.$fit;
        if (fit instanceof Fit.Layout) {
            Artboard artboard = this.$artboardToUse;
            final k kVar = this.$surfaceWidth$delegate;
            final k kVar2 = this.$surfaceHeight$delegate;
            Trace.beginSection("Rive/Layout/ResizeArtboard");
            try {
                RiveLog.INSTANCE.getLogger().d("Rive/UI", new Function0<String>() { // from class: app.rive.RiveKt$Rive$6$1$1
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        int Rive$lambda$7;
                        int Rive$lambda$10;
                        Rive$lambda$7 = RiveKt.Rive$lambda$7(k.this);
                        Rive$lambda$10 = RiveKt.Rive$lambda$10(kVar2);
                        return e.f(Rive$lambda$7, Rive$lambda$10, "Resizing artboard to ", " x ");
                    }
                });
                artboard.resizeArtboard(Rive$lambda$4, fit.getScaleFactor());
                Unit unit = Unit.a;
                Trace.endSection();
            } finally {
            }
        } else {
            Artboard artboard2 = this.$artboardToUse;
            Trace.beginSection("Rive/Layout/ResetArtboardSize");
            try {
                RiveLog.INSTANCE.getLogger().d("Rive/UI", new Function0<String>() { // from class: app.rive.RiveKt$Rive$6$2$1
                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return "Resetting artboard size";
                    }
                });
                artboard2.resetArtboardSize();
                Unit unit2 = Unit.a;
            } finally {
            }
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
        return ((RiveKt$Rive$6) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
