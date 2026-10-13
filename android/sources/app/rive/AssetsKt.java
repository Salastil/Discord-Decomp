package app.rive;

import app.rive.AudioAsset;
import app.rive.FontAsset;
import app.rive.ImageAsset;
import app.rive.Result;
import app.rive.core.CommandQueue;
import com.facebook.react.devsupport.StackTraceHelper;
import kotlin.Metadata;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.reflect.KFunction;
import org.jetbrains.annotations.NotNull;
import tn.g;
import u.b;
import u.c;
import u.i;
import u.l;
import u.w;

@Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\b\u001a)\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00060\u00052\n\u0010\u0002\u001a\u00060\u0000j\u0002`\u00012\u0006\u0010\u0004\u001a\u00020\u0003H\u0007¢\u0006\u0004\b\u0007\u0010\b\u001a1\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00060\u00052\n\u0010\u0002\u001a\u00060\u0000j\u0002`\u00012\u0006\u0010\n\u001a\u00020\t2\u0006\u0010\u0004\u001a\u00020\u0003H\u0007¢\u0006\u0004\b\u000b\u0010\f\u001a)\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\r0\u00052\n\u0010\u0002\u001a\u00060\u0000j\u0002`\u00012\u0006\u0010\u0004\u001a\u00020\u0003H\u0007¢\u0006\u0004\b\u000e\u0010\b\u001a1\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\r0\u00052\n\u0010\u0002\u001a\u00060\u0000j\u0002`\u00012\u0006\u0010\n\u001a\u00020\t2\u0006\u0010\u0004\u001a\u00020\u0003H\u0007¢\u0006\u0004\b\u000f\u0010\f\u001a)\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00100\u00052\n\u0010\u0002\u001a\u00060\u0000j\u0002`\u00012\u0006\u0010\u0004\u001a\u00020\u0003H\u0007¢\u0006\u0004\b\u0011\u0010\b\u001a1\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00100\u00052\n\u0010\u0002\u001a\u00060\u0000j\u0002`\u00012\u0006\u0010\u0012\u001a\u00020\t2\u0006\u0010\u0004\u001a\u00020\u0003H\u0007¢\u0006\u0004\b\u0013\u0010\f\u001a\u007f\u0010\u001b\u001a\b\u0012\u0004\u0012\u00028\u00000\u0005\"\u000e\b\u0000\u0010\u0015*\b\u0012\u0004\u0012\u00028\u00010\u0014\"\u0004\b\u0001\u0010\u00162\n\u0010\u0002\u001a\u00060\u0000j\u0002`\u00012\u0006\u0010\u0004\u001a\u00020\u000322\u0010\u001a\u001a.\b\u0001\u0012\b\u0012\u00060\u0000j\u0002`\u0001\u0012\u0004\u0012\u00020\u0003\u0012\u0010\u0012\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00028\u00000\u00050\u0018\u0012\u0006\u0012\u0004\u0018\u00010\u00190\u00172\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\tH\u0003¢\u0006\u0004\b\u001b\u0010\u001c\"\u0014\u0010\u001d\u001a\u00020\t8\u0002X\u0082T¢\u0006\u0006\n\u0004\b\u001d\u0010\u001e\"\u0014\u0010\u001f\u001a\u00020\t8\u0002X\u0082T¢\u0006\u0006\n\u0004\b\u001f\u0010\u001e\"\u0014\u0010 \u001a\u00020\t8\u0002X\u0082T¢\u0006\u0006\n\u0004\b \u0010\u001e¨\u0006!"}, d2 = {"Lapp/rive/core/CommandQueue;", "Lapp/rive/core/RiveWorker;", "riveWorker", "", "bytes", "Lapp/rive/Result;", "Lapp/rive/ImageAsset;", "rememberImage", "(Lapp/rive/core/CommandQueue;[BLu/c;I)Lapp/rive/Result;", "", "key", "rememberRegisteredImage", "(Lapp/rive/core/CommandQueue;Ljava/lang/String;[BLu/c;I)Lapp/rive/Result;", "Lapp/rive/AudioAsset;", "rememberAudio", "rememberRegisteredAudio", "Lapp/rive/FontAsset;", "rememberFont", StackTraceHelper.NAME_KEY, "rememberRegisteredFont", "Lapp/rive/Asset;", "T", "H", "Lkotlin/Function3;", "Lkotlin/coroutines/Continuation;", "", "constructFn", "rememberAsset", "(Lapp/rive/core/CommandQueue;[BLkotlin/jvm/functions/Function3;Ljava/lang/String;Lu/c;II)Lapp/rive/Result;", "IMAGE_TAG", "Ljava/lang/String;", "AUDIO_TAG", "FONT_TAG", "kotlin_release"}, k = 2, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nAssets.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Assets.kt\napp/rive/AssetsKt\n+ 2 Composer.kt\nandroidx/compose/runtime/ComposerKt\n*L\n1#1,432:1\n1282#2,6:433\n1282#2,6:439\n1282#2,6:445\n1282#2,6:451\n1282#2,6:457\n1282#2,6:463\n*S KotlinDebug\n*F\n+ 1 Assets.kt\napp/rive/AssetsKt\n*L\n280#1:433,6\n303#1:439,6\n324#1:445,6\n347#1:451,6\n368#1:457,6\n391#1:463,6\n*E\n"})
/* loaded from: classes.dex */
public final class AssetsKt {

    @NotNull
    private static final String AUDIO_TAG = "Rive/Audio";

    @NotNull
    private static final String FONT_TAG = "Rive/Font";

    @NotNull
    private static final String IMAGE_TAG = "Rive/Image";

    private static final <T extends Asset<H>, H> Result<T> rememberAsset(CommandQueue commandQueue, byte[] bArr, Function3 function3, String str, c cVar, int i5, int i6) {
        cVar.d();
        String str2 = (i6 & 8) != 0 ? null : str;
        Result.Loading loading = Result.Loading.INSTANCE;
        AssetsKt$rememberAsset$1 assetsKt$rememberAsset$1 = new AssetsKt$rememberAsset$1(function3, commandQueue, bArr, str2, null);
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
            a10 = new w(assetsKt$rememberAsset$1, lVar, null, 1);
            cVar.g();
        }
        throw null;
    }

    @NotNull
    public static final Result<AudioAsset> rememberAudio(@NotNull CommandQueue riveWorker, @NotNull byte[] bytes, c cVar, int i5) {
        Intrinsics.checkNotNullParameter(riveWorker, "riveWorker");
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        cVar.d();
        AudioAsset.Companion companion = AudioAsset.INSTANCE;
        cVar.d();
        Object a = cVar.a();
        if (a == b.a) {
            a = new AssetsKt$rememberAudio$1$1(companion);
            cVar.g();
        }
        cVar.k();
        Result<AudioAsset> rememberAsset = rememberAsset(riveWorker, bytes, (Function3) ((KFunction) a), null, cVar, 584, 8);
        cVar.k();
        return rememberAsset;
    }

    @NotNull
    public static final Result<FontAsset> rememberFont(@NotNull CommandQueue riveWorker, @NotNull byte[] bytes, c cVar, int i5) {
        Intrinsics.checkNotNullParameter(riveWorker, "riveWorker");
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        cVar.d();
        FontAsset.Companion companion = FontAsset.INSTANCE;
        cVar.d();
        Object a = cVar.a();
        if (a == b.a) {
            a = new AssetsKt$rememberFont$1$1(companion);
            cVar.g();
        }
        cVar.k();
        Result<FontAsset> rememberAsset = rememberAsset(riveWorker, bytes, (Function3) ((KFunction) a), null, cVar, 584, 8);
        cVar.k();
        return rememberAsset;
    }

    @NotNull
    public static final Result<ImageAsset> rememberImage(@NotNull CommandQueue riveWorker, @NotNull byte[] bytes, c cVar, int i5) {
        Intrinsics.checkNotNullParameter(riveWorker, "riveWorker");
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        cVar.d();
        ImageAsset.Companion companion = ImageAsset.INSTANCE;
        cVar.d();
        Object a = cVar.a();
        if (a == b.a) {
            a = new AssetsKt$rememberImage$1$1(companion);
            cVar.g();
        }
        cVar.k();
        Result<ImageAsset> rememberAsset = rememberAsset(riveWorker, bytes, (Function3) ((KFunction) a), null, cVar, 584, 8);
        cVar.k();
        return rememberAsset;
    }

    @NotNull
    public static final Result<AudioAsset> rememberRegisteredAudio(@NotNull CommandQueue riveWorker, @NotNull String key, @NotNull byte[] bytes, c cVar, int i5) {
        Intrinsics.checkNotNullParameter(riveWorker, "riveWorker");
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        cVar.d();
        AudioAsset.Companion companion = AudioAsset.INSTANCE;
        cVar.d();
        Object a = cVar.a();
        if (a == b.a) {
            a = new AssetsKt$rememberRegisteredAudio$1$1(companion);
            cVar.g();
        }
        cVar.k();
        Result<AudioAsset> rememberAsset = rememberAsset(riveWorker, bytes, (Function3) ((KFunction) a), key, cVar, ((i5 << 6) & 7168) | 584, 0);
        cVar.k();
        return rememberAsset;
    }

    @NotNull
    public static final Result<FontAsset> rememberRegisteredFont(@NotNull CommandQueue riveWorker, @NotNull String name, @NotNull byte[] bytes, c cVar, int i5) {
        Intrinsics.checkNotNullParameter(riveWorker, "riveWorker");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        cVar.d();
        FontAsset.Companion companion = FontAsset.INSTANCE;
        cVar.d();
        Object a = cVar.a();
        if (a == b.a) {
            a = new AssetsKt$rememberRegisteredFont$1$1(companion);
            cVar.g();
        }
        cVar.k();
        Result<FontAsset> rememberAsset = rememberAsset(riveWorker, bytes, (Function3) ((KFunction) a), name, cVar, ((i5 << 6) & 7168) | 584, 0);
        cVar.k();
        return rememberAsset;
    }

    @NotNull
    public static final Result<ImageAsset> rememberRegisteredImage(@NotNull CommandQueue riveWorker, @NotNull String key, @NotNull byte[] bytes, c cVar, int i5) {
        Intrinsics.checkNotNullParameter(riveWorker, "riveWorker");
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        cVar.d();
        ImageAsset.Companion companion = ImageAsset.INSTANCE;
        cVar.d();
        Object a = cVar.a();
        if (a == b.a) {
            a = new AssetsKt$rememberRegisteredImage$1$1(companion);
            cVar.g();
        }
        cVar.k();
        Result<ImageAsset> rememberAsset = rememberAsset(riveWorker, bytes, (Function3) ((KFunction) a), key, cVar, ((i5 << 6) & 7168) | 584, 0);
        cVar.k();
        return rememberAsset;
    }
}
