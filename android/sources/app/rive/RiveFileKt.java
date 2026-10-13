package app.rive;

import app.rive.Result;
import app.rive.core.CommandQueue;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import tn.g;
import u.b;
import u.c;
import u.i;
import u.l;
import u.w;

@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\u001a)\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00060\u00052\u0006\u0010\u0001\u001a\u00020\u00002\n\u0010\u0004\u001a\u00060\u0002j\u0002`\u0003H\u0007¢\u0006\u0004\b\u0007\u0010\b\"\u0014\u0010\n\u001a\u00020\t8\u0002X\u0082T¢\u0006\u0006\n\u0004\b\n\u0010\u000b¨\u0006\f"}, d2 = {"Lapp/rive/RiveFileSource;", "source", "Lapp/rive/core/CommandQueue;", "Lapp/rive/core/RiveWorker;", "riveWorker", "Lapp/rive/Result;", "Lapp/rive/RiveFile;", "rememberRiveFile", "(Lapp/rive/RiveFileSource;Lapp/rive/core/CommandQueue;Lu/c;I)Lapp/rive/Result;", "", "FILE_TAG", "Ljava/lang/String;", "kotlin_release"}, k = 2, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class RiveFileKt {

    @NotNull
    private static final String FILE_TAG = "Rive/File";

    @NotNull
    public static final Result<RiveFile> rememberRiveFile(@NotNull RiveFileSource source, @NotNull CommandQueue riveWorker, c cVar, int i5) {
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(riveWorker, "riveWorker");
        cVar.d();
        Result.Loading loading = Result.Loading.INSTANCE;
        RiveFileKt$rememberRiveFile$1 riveFileKt$rememberRiveFile$1 = new RiveFileKt$rememberRiveFile$1(source, riveWorker, null);
        Object a = cVar.a();
        i iVar = b.a;
        if (a == iVar) {
            a = g.s(loading);
            cVar.g();
        }
        l lVar = (l) a;
        boolean b10 = cVar.b();
        Object a10 = cVar.a();
        if (b10 || a10 == iVar) {
            a10 = new w(riveFileKt$rememberRiveFile$1, lVar, null, 0);
            cVar.g();
        }
        throw null;
    }
}
