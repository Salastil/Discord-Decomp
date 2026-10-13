package app.rive;

import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import u.b;
import u.c;
import u.f;
import u.g;

@Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\u001a#\u0010\u0005\u001a\u00020\u00042\u0006\u0010\u0001\u001a\u00020\u00002\n\b\u0002\u0010\u0003\u001a\u0004\u0018\u00010\u0002H\u0007¢\u0006\u0004\b\u0005\u0010\u0006\"\u0014\u0010\u0007\u001a\u00020\u00028\u0002X\u0082T¢\u0006\u0006\n\u0004\b\u0007\u0010\b¨\u0006\t"}, d2 = {"Lapp/rive/RiveFile;", "file", "", "artboardName", "Lapp/rive/Artboard;", "rememberArtboard", "(Lapp/rive/RiveFile;Ljava/lang/String;Lu/c;II)Lapp/rive/Artboard;", "ARTBOARD_TAG", "Ljava/lang/String;", "kotlin_release"}, k = 2, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nArtboard.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Artboard.kt\napp/rive/ArtboardKt\n+ 2 Composer.kt\nandroidx/compose/runtime/ComposerKt\n*L\n1#1,141:1\n1282#2,6:142\n*S KotlinDebug\n*F\n+ 1 Artboard.kt\napp/rive/ArtboardKt\n*L\n131#1:142,6\n*E\n"})
/* loaded from: classes.dex */
public final class ArtboardKt {

    @NotNull
    private static final String ARTBOARD_TAG = "Rive/Artboard";

    @NotNull
    public static final Artboard rememberArtboard(@NotNull RiveFile file, String str, c cVar, int i5, int i6) {
        Intrinsics.checkNotNullParameter(file, "file");
        cVar.d();
        if ((i6 & 2) != 0) {
            str = null;
        }
        cVar.d();
        boolean z5 = ((((i5 & 14) ^ 6) > 4 && cVar.j()) || (i5 & 6) == 4) | ((((i5 & 112) ^ 48) > 32 && cVar.j()) || (i5 & 48) == 32);
        Object a = cVar.a();
        if (z5 || a == b.a) {
            a = Artboard.INSTANCE.fromFile(file, str);
            cVar.g();
        }
        final Artboard artboard = (Artboard) a;
        cVar.k();
        new Function1<g, f>() { // from class: app.rive.ArtboardKt$rememberArtboard$1
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            @NotNull
            public final f invoke(@NotNull g DisposableEffect) {
                Intrinsics.checkNotNullParameter(DisposableEffect, "$this$DisposableEffect");
                final Artboard artboard2 = Artboard.this;
                return new f() { // from class: app.rive.ArtboardKt$rememberArtboard$1$invoke$$inlined$onDispose$1
                    public void dispose() {
                        Artboard.this.close();
                    }
                };
            }
        };
        throw null;
    }
}
