package app.rive;

import android.content.Context;
import android.view.TextureView;
import app.rive.core.CommandQueue;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import n0.b;
import org.jetbrains.annotations.NotNull;
import u.c;
import u.k;
import u.l;
import u.x;

@Metadata(d1 = {"\u0000\b\n\u0002\u0010\u0002\n\u0002\b\u0003\u0010\u0003\u001a\u00020\u0000H\u000b¢\u0006\u0004\b\u0001\u0010\u0002"}, d2 = {"", "invoke", "(Lu/c;I)V", "<anonymous>"}, k = 3, mv = {1, 9, 0})
/* loaded from: classes.dex */
public final class RiveKt$Rive$8 extends Lambda implements Function2<c, Integer, Unit> {
    final /* synthetic */ l $bitmapCallbackSent$delegate;
    final /* synthetic */ x $currentOnBitmapAvailable$delegate;
    final /* synthetic */ CommandQueue $riveWorker;
    final /* synthetic */ l $surface$delegate;
    final /* synthetic */ k $surfaceHeight$delegate;
    final /* synthetic */ k $surfaceWidth$delegate;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveKt$Rive$8(CommandQueue commandQueue, l lVar, k kVar, k kVar2, l lVar2, x xVar) {
        super(2);
        this.$riveWorker = commandQueue;
        this.$surface$delegate = lVar;
        this.$surfaceWidth$delegate = kVar;
        this.$surfaceHeight$delegate = kVar2;
        this.$bitmapCallbackSent$delegate = lVar2;
        this.$currentOnBitmapAvailable$delegate = xVar;
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
        if ((i5 & 11) == 2 && cVar.c()) {
            cVar.f();
            return;
        }
        final CommandQueue commandQueue = this.$riveWorker;
        final l lVar = this.$surface$delegate;
        final k kVar = this.$surfaceWidth$delegate;
        final k kVar2 = this.$surfaceHeight$delegate;
        final l lVar2 = this.$bitmapCallbackSent$delegate;
        final x xVar = this.$currentOnBitmapAvailable$delegate;
        Function1<Context, TextureView> factory = new Function1<Context, TextureView>() { // from class: app.rive.RiveKt$Rive$8.1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            @NotNull
            public final TextureView invoke(@NotNull Context context) {
                Intrinsics.checkNotNullParameter(context, "context");
                TextureView textureView = new TextureView(context);
                CommandQueue commandQueue2 = CommandQueue.this;
                l lVar3 = lVar;
                k kVar3 = kVar;
                k kVar4 = kVar2;
                l lVar4 = lVar2;
                x xVar2 = xVar;
                textureView.setOpaque(false);
                textureView.setSurfaceTextureListener(new RiveKt$Rive$8$1$1$1(commandQueue2, lVar3, kVar3, kVar4, lVar4, textureView, xVar2));
                return textureView;
            }
        };
        int i6 = b.a;
        Intrinsics.checkNotNullParameter(factory, "factory");
        throw null;
    }
}
