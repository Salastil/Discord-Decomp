package app.rive;

import android.graphics.Bitmap;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Lambda;
import u.c;
import z.f;

@Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class RiveKt$Rive$9 extends Lambda implements Function2<c, Integer, Unit> {
    final /* synthetic */ int $$changed;
    final /* synthetic */ int $$default;
    final /* synthetic */ Artboard $artboard;
    final /* synthetic */ int $backgroundColor;
    final /* synthetic */ RiveFile $file;
    final /* synthetic */ Fit $fit;
    final /* synthetic */ f $modifier;
    final /* synthetic */ Function1<Function0<Bitmap>, Unit> $onBitmapAvailable;
    final /* synthetic */ boolean $playing;
    final /* synthetic */ RivePointerInputMode $pointerInputMode;
    final /* synthetic */ StateMachine $stateMachine;
    final /* synthetic */ ViewModelInstance $viewModelInstance;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public RiveKt$Rive$9(RiveFile riveFile, f fVar, boolean z5, Artboard artboard, StateMachine stateMachine, ViewModelInstance viewModelInstance, Fit fit, int i5, RivePointerInputMode rivePointerInputMode, Function1<? super Function0<Bitmap>, Unit> function1, int i6, int i10) {
        super(2);
        this.$file = riveFile;
        this.$modifier = fVar;
        this.$playing = z5;
        this.$artboard = artboard;
        this.$stateMachine = stateMachine;
        this.$viewModelInstance = viewModelInstance;
        this.$fit = fit;
        this.$backgroundColor = i5;
        this.$pointerInputMode = rivePointerInputMode;
        this.$onBitmapAvailable = function1;
        this.$$changed = i6;
        this.$$default = i10;
    }

    @Override // kotlin.jvm.functions.Function2
    public /* synthetic */ Object invoke(Object obj, Object obj2) {
        if (obj != null) {
            throw new ClassCastException();
        }
        invoke((c) null, ((Number) obj2).intValue());
        return Unit.a;
    }

    public final void invoke(c cVar, int i5) {
        RiveFile riveFile = this.$file;
        f fVar = this.$modifier;
        boolean z5 = this.$playing;
        Artboard artboard = this.$artboard;
        StateMachine stateMachine = this.$stateMachine;
        ViewModelInstance viewModelInstance = this.$viewModelInstance;
        Fit fit = this.$fit;
        int i6 = this.$backgroundColor;
        RivePointerInputMode rivePointerInputMode = this.$pointerInputMode;
        Function1<Function0<Bitmap>, Unit> function1 = this.$onBitmapAvailable;
        int i10 = this.$$changed | 1;
        int i11 = 306783378 & i10;
        int i12 = 613566756 & i10;
        RiveKt.Rive(riveFile, fVar, z5, artboard, stateMachine, viewModelInstance, fit, i6, rivePointerInputMode, function1, cVar, (i10 & (-920350135)) | (i12 >> 1) | i11 | ((i11 << 1) & i12), this.$$default);
    }
}
