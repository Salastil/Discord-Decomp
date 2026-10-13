package com.discord.media.utils;

import android.annotation.SuppressLint;
import android.content.ContentResolver;
import android.content.Context;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.ParcelFileDescriptor;
import com.discord.crash_reporting.CrashReporting;
import eo.c;
import fo.q;
import fo.r;
import id.zelory.compressor.constraint.Compression;
import java.io.File;
import java.util.Map;
import java.util.concurrent.CancellationException;
import java.util.concurrent.TimeUnit;
import ki.b;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import net.ypresto.qtfaststart.QtFastStart;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import ur.d;
import ur.e;

@Metadata(d1 = {"\u0000X\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\u0010\u0002\n\u0002\b\u0007\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\r\n\u0002\u0010$\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0007\u0018\u0000 @2\u00020\u0001:\u0001@B)\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0018\u0010\b\u001a\u0014\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u00070\u0004¢\u0006\u0004\b\t\u0010\nJ\u0010\u0010\u000b\u001a\u00020\u0007H\u0083@¢\u0006\u0004\b\u000b\u0010\fJ)\u0010\u0011\u001a\u0004\u0018\u00010\u00052\u0006\u0010\r\u001a\u00020\u00052\u0006\u0010\u000e\u001a\u00020\u00052\u0006\u0010\u0010\u001a\u00020\u000fH\u0002¢\u0006\u0004\b\u0011\u0010\u0012J*\u0010\u0017\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\u00052\u0006\u0010\u0014\u001a\u00020\u00132\b\u0010\u0016\u001a\u0004\u0018\u00010\u0015H\u0082@¢\u0006\u0004\b\u0017\u0010\u0018J:\u0010\u001d\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\u00052\u0006\u0010\u0019\u001a\u00020\u00062\u0006\u0010\u001a\u001a\u00020\u00132\u0006\u0010\u001b\u001a\u00020\u00132\b\b\u0002\u0010\u001c\u001a\u00020\u0013H\u0082@¢\u0006\u0004\b\u001d\u0010\u001eJ$\u0010\"\u001a\u00020\u00052\u0006\u0010\u001f\u001a\u00020\u00052\n\b\u0002\u0010!\u001a\u0004\u0018\u00010 H\u0082@¢\u0006\u0004\b\"\u0010#J/\u0010(\u001a\u00020\u00072\u0006\u0010%\u001a\u00020$2\u0006\u0010&\u001a\u00020$2\u0006\u0010\r\u001a\u00020\u00052\u0006\u0010'\u001a\u00020\u0005H\u0002¢\u0006\u0004\b(\u0010)J\u0017\u0010*\u001a\u0004\u0018\u00010$2\u0006\u0010\u001f\u001a\u00020\u0005¢\u0006\u0004\b*\u0010+J\u0015\u0010,\u001a\u00020\u00072\u0006\u0010\r\u001a\u00020\u0005¢\u0006\u0004\b,\u0010-JN\u00101\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\u00052\b\b\u0001\u0010.\u001a\u00020\u00062\u0006\u0010\u001a\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u00132\u0006\u0010\u001b\u001a\u00020\u00132\b\u0010\u0016\u001a\u0004\u0018\u00010\u00152\b\b\u0002\u0010\u001c\u001a\u00020\u0013H\u0080@¢\u0006\u0004\b/\u00100J!\u00103\u001a\u000e\u0012\u0004\u0012\u00020$\u0012\u0004\u0012\u00020\u0001022\u0006\u0010\r\u001a\u00020\u0005¢\u0006\u0004\b3\u00104R\u0014\u0010\u0003\u001a\u00020\u00028\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0003\u00105R&\u0010\b\u001a\u0014\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u00070\u00048\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\b\u00106R\u001c\u00108\u001a\n 7*\u0004\u0018\u00010 0 8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b8\u00109R\u0014\u0010=\u001a\u00020:8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b;\u0010<R\u0018\u0010?\u001a\u00020$*\u00020\u00058BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b>\u0010+¨\u0006A"}, d2 = {"Lcom/discord/media/utils/MediaResolver;", "", "Landroid/content/Context;", "context", "Lkotlin/Function2;", "Landroid/net/Uri;", "", "", "onProgress", "<init>", "(Landroid/content/Context;Lkotlin/jvm/functions/Function2;)V", "checkFreeSpace", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "inputUri", "compressedUri", "", "mediaSourceSize", "createMP4FastStartUri", "(Landroid/net/Uri;Landroid/net/Uri;J)Landroid/net/Uri;", "", "skipVideoTranscode", "Lcom/discord/media/utils/EncodingConfig;", "encodingConfig", "handleVideo", "(Landroid/net/Uri;ZLcom/discord/media/utils/EncodingConfig;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "compressionQuality", "isLowQuality", "useOriginalIfSmaller", "allowOptimization", "handleImage", "(Landroid/net/Uri;IZZZLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "uri", "Ljava/io/File;", "targetFile", "copyToFile", "(Landroid/net/Uri;Ljava/io/File;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "", "tag", "message", "outputUri", "logMediaError", "(Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;Landroid/net/Uri;)V", "getMimeType", "(Landroid/net/Uri;)Ljava/lang/String;", "cancel", "(Landroid/net/Uri;)V", "imageCompressionQuality", "resolveToUri$media_release", "(Landroid/net/Uri;IZZZLcom/discord/media/utils/EncodingConfig;ZLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "resolveToUri", "", "handleVideoMetadata", "(Landroid/net/Uri;)Ljava/util/Map;", "Landroid/content/Context;", "Lkotlin/jvm/functions/Function2;", "kotlin.jvm.PlatformType", "cacheDir", "Ljava/io/File;", "Landroid/content/ContentResolver;", "getResolver", "()Landroid/content/ContentResolver;", "resolver", "getRequestId", "requestId", "Companion", "media_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nMediaResolver.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaResolver.kt\ncom/discord/media/utils/MediaResolver\n+ 2 Uri.kt\nandroidx/core/net/UriKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,270:1\n36#2:271\n36#2:272\n36#2:274\n36#2:275\n36#2:276\n1#3:273\n*S KotlinDebug\n*F\n+ 1 MediaResolver.kt\ncom/discord/media/utils/MediaResolver\n*L\n114#1:271\n138#1:272\n217#1:274\n226#1:275\n229#1:276\n*E\n"})
/* loaded from: classes.dex */
public final class MediaResolver {

    @Deprecated
    public static final double FREE_SPACE_PERCENT = 0.2d;
    private final File cacheDir;

    @NotNull
    private final Context context;

    @NotNull
    private final Function2<Uri, Integer, Unit> onProgress;

    @NotNull
    private static final Companion Companion = new Companion(null);
    private static final long HALF_DAY_MILLIS = TimeUnit.HOURS.toMillis(12);

    @Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0000\n\u0002\u0010\t\n\u0002\b\u0003\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/discord/media/utils/MediaResolver$Companion;", "", "<init>", "()V", "FREE_SPACE_PERCENT", "", "HALF_DAY_MILLIS", "", "getHALF_DAY_MILLIS", "()J", "media_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        public final long getHALF_DAY_MILLIS() {
            return MediaResolver.HALF_DAY_MILLIS;
        }

        private Companion() {
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public MediaResolver(@NotNull Context context, @NotNull Function2<? super Uri, ? super Integer, Unit> onProgress) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(onProgress, "onProgress");
        this.context = context;
        this.onProgress = onProgress;
        this.cacheDir = context.getCacheDir();
    }

    /* JADX INFO: Access modifiers changed from: private */
    @SuppressLint({"UsableSpace"})
    public final Object checkFreeSpace(Continuation continuation) {
        e eVar = g0.a;
        Object A = x.A(d.f19093i, new MediaResolver$checkFreeSpace$2(this, null), continuation);
        return A == ko.a.f13464d ? A : Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object copyToFile(Uri uri, File file, Continuation continuation) {
        e eVar = g0.a;
        return x.A(d.f19093i, new MediaResolver$copyToFile$2(file, this, uri, null), continuation);
    }

    public static /* synthetic */ Object copyToFile$default(MediaResolver mediaResolver, Uri uri, File file, Continuation continuation, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            file = null;
        }
        return mediaResolver.copyToFile(uri, file, continuation);
    }

    private final Uri createMP4FastStartUri(Uri inputUri, Uri compressedUri, long mediaSourceSize) {
        String path = compressedUri.getPath();
        if (path == null) {
            return null;
        }
        Uri uri = new File(path).length() > mediaSourceSize ? inputUri : compressedUri;
        ParcelFileDescriptor openFileDescriptor = getResolver().openFileDescriptor(uri, "r");
        if (openFileDescriptor == null) {
            return null;
        }
        File createTempFile$default = ContentResolverUtils.createTempFile$default(ContentResolverUtils.INSTANCE, getResolver(), uri, null, "mp4", 2, null);
        boolean z5 = false;
        try {
            z5 = QtFastStart.fastStart(openFileDescriptor.getFileDescriptor(), createTempFile$default);
            Uri fromFile = z5 ? Uri.fromFile(createTempFile$default) : uri;
            openFileDescriptor.close();
            if (z5) {
                new File(path).delete();
                return fromFile;
            }
            createTempFile$default.delete();
            if (!Intrinsics.areEqual(uri, compressedUri)) {
                new File(path).delete();
            }
            return fromFile;
        } catch (Throwable th2) {
            openFileDescriptor.close();
            if (z5) {
                new File(path).delete();
            } else {
                createTempFile$default.delete();
                if (!Intrinsics.areEqual(uri, compressedUri)) {
                    new File(path).delete();
                }
            }
            throw th2;
        }
    }

    private final String getRequestId(Uri uri) {
        String uri2 = uri.toString();
        Intrinsics.checkNotNullExpressionValue(uri2, "toString(...)");
        return uri2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final ContentResolver getResolver() {
        ContentResolver contentResolver = this.context.getContentResolver();
        Intrinsics.checkNotNullExpressionValue(contentResolver, "getContentResolver(...)");
        return contentResolver;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:19:0x00ec  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x00f1  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00bb  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x004f  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0029  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object handleImage(final Uri uri, final int i5, boolean z5, boolean z6, boolean z7, Continuation continuation) {
        MediaResolver$handleImage$1 mediaResolver$handleImage$1;
        int i6;
        boolean isHeif;
        Uri uri2;
        boolean z8;
        File file;
        String path;
        if (continuation instanceof MediaResolver$handleImage$1) {
            mediaResolver$handleImage$1 = (MediaResolver$handleImage$1) continuation;
            int i10 = mediaResolver$handleImage$1.label;
            if ((i10 & Integer.MIN_VALUE) != 0) {
                mediaResolver$handleImage$1.label = i10 - Integer.MIN_VALUE;
                Object obj = mediaResolver$handleImage$1.result;
                Object obj2 = ko.a.f13464d;
                i6 = mediaResolver$handleImage$1.label;
                if (i6 != 0) {
                    b.R(obj);
                    final boolean z10 = false;
                    if (z7) {
                        ContentResolver resolver = getResolver();
                        ContentResolverUtils contentResolverUtils = ContentResolverUtils.INSTANCE;
                        isHeif = contentResolverUtils.isHeif(resolver, uri) || contentResolverUtils.isJpeg(resolver, uri) || (z5 && contentResolverUtils.isPng(resolver, uri));
                    } else {
                        isHeif = ContentResolverUtils.INSTANCE.isHeif(getResolver(), uri);
                    }
                    if (isHeif && z5) {
                        z10 = true;
                    }
                    if (isHeif) {
                        Context context = this.context;
                        Function1 function1 = new Function1() { // from class: com.discord.media.utils.a
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj3) {
                                Unit handleImage$lambda$7;
                                handleImage$lambda$7 = MediaResolver.handleImage$lambda$7(i5, z10, this, uri, (Compression) obj3);
                                return handleImage$lambda$7;
                            }
                        };
                        mediaResolver$handleImage$1.L$0 = uri;
                        mediaResolver$handleImage$1.Z$0 = z6;
                        mediaResolver$handleImage$1.label = 1;
                        e eVar = g0.a;
                        Object A = x.A(d.f19093i, new co.a(function1, context, uri, null), mediaResolver$handleImage$1);
                        if (A != obj2) {
                            uri2 = uri;
                            z8 = z6;
                            obj = A;
                        }
                    } else {
                        mediaResolver$handleImage$1.label = 3;
                        Object copyToFile$default = copyToFile$default(this, uri, null, mediaResolver$handleImage$1, 2, null);
                        if (copyToFile$default != obj2) {
                            return copyToFile$default;
                        }
                    }
                    return obj2;
                }
                if (i6 != 1) {
                    if (i6 != 2) {
                        if (i6 != 3) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        b.R(obj);
                        return obj;
                    }
                    file = (File) mediaResolver$handleImage$1.L$0;
                    b.R(obj);
                    Uri uri3 = (Uri) obj;
                    path = uri3.getPath();
                    if (path != null) {
                        return Uri.fromFile(file);
                    }
                    File file2 = new File(path);
                    if (file2.length() <= file.length()) {
                        file.delete();
                        return uri3;
                    }
                    file2.delete();
                    return Uri.fromFile(file);
                }
                z8 = mediaResolver$handleImage$1.Z$0;
                Uri uri4 = (Uri) mediaResolver$handleImage$1.L$0;
                b.R(obj);
                uri2 = uri4;
                File file3 = (File) obj;
                this.onProgress.invoke(uri2, new Integer(100));
                if (z8) {
                    ContentResolverUtils contentResolverUtils2 = ContentResolverUtils.INSTANCE;
                    if (contentResolverUtils2.isJpeg(getResolver(), uri2)) {
                        File createTempFile$default = ContentResolverUtils.createTempFile$default(contentResolverUtils2, getResolver(), uri2, null, "jpeg", 2, null);
                        mediaResolver$handleImage$1.L$0 = file3;
                        mediaResolver$handleImage$1.label = 2;
                        Object copyToFile = copyToFile(uri2, createTempFile$default, mediaResolver$handleImage$1);
                        if (copyToFile != obj2) {
                            obj = copyToFile;
                            file = file3;
                            Uri uri32 = (Uri) obj;
                            path = uri32.getPath();
                            if (path != null) {
                            }
                        }
                        return obj2;
                    }
                }
                return Uri.fromFile(file3);
            }
        }
        mediaResolver$handleImage$1 = new MediaResolver$handleImage$1(this, continuation);
        Object obj3 = mediaResolver$handleImage$1.result;
        Object obj22 = ko.a.f13464d;
        i6 = mediaResolver$handleImage$1.label;
        if (i6 != 0) {
        }
        File file32 = (File) obj3;
        this.onProgress.invoke(uri2, new Integer(100));
        if (z8) {
        }
        return Uri.fromFile(file32);
    }

    public static /* synthetic */ Object handleImage$default(MediaResolver mediaResolver, Uri uri, int i5, boolean z5, boolean z6, boolean z7, Continuation continuation, int i6, Object obj) {
        if ((i6 & 16) != 0) {
            z7 = true;
        }
        return mediaResolver.handleImage(uri, i5, z5, z6, z7, continuation);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit handleImage$lambda$7(int i5, boolean z5, MediaResolver mediaResolver, Uri uri, Compression destination) {
        Intrinsics.checkNotNullParameter(destination, "$this$compress");
        destination.a(new QualityAndResolutionConstraint(i5, z5));
        Bitmap.CompressFormat format = Bitmap.CompressFormat.JPEG;
        Intrinsics.checkParameterIsNotNull(destination, "$this$format");
        Intrinsics.checkParameterIsNotNull(format, "format");
        Intrinsics.checkParameterIsNotNull(format, "format");
        destination.a(new c());
        File destination2 = ContentResolverUtils.createTempFile$default(ContentResolverUtils.INSTANCE, mediaResolver.getResolver(), uri, null, "jpeg", 2, null);
        Intrinsics.checkParameterIsNotNull(destination, "$this$destination");
        Intrinsics.checkParameterIsNotNull(destination2, "destination");
        destination.a(new eo.b(destination2));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Can't wrap try/catch for region: R(11:0|1|(2:3|(8:5|6|7|(1:(1:(1:(2:12|13)(2:15|16))(4:17|18|19|20))(4:21|22|23|24))(10:46|47|48|49|(1:51)|52|(1:54)|55|(1:(3:58|27|(1:31)(2:29|30))(6:(4:67|68|69|(1:71))(4:60|61|62|63)|66|35|(2:37|(1:39)(1:42))|19|20))(2:75|(0)(1:77))|41)|25|26|27|(0)(0)))|81|6|7|(0)(0)|25|26|27|(0)(0)) */
    /* JADX WARN: Code restructure failed: missing block: B:33:0x00f6, code lost:
    
        r0 = th;
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x00f7, code lost:
    
        r6 = r3;
        r3 = r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:40:0x013c, code lost:
    
        if (r0 == r10) goto L75;
     */
    /* JADX WARN: Removed duplicated region for block: B:29:0x00f4  */
    /* JADX WARN: Removed duplicated region for block: B:31:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:46:0x005e  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0028  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object handleVideo(Uri uri, boolean z5, EncodingConfig encodingConfig, Continuation continuation) {
        MediaResolver$handleVideo$1 mediaResolver$handleVideo$1;
        int i5;
        Uri fromFile;
        Object i6;
        DiscordVideoMediaSource discordVideoMediaSource;
        MediaResolver$handleVideo$1 mediaResolver$handleVideo$12;
        MediaResolver mediaResolver;
        Uri uri2;
        Uri uri3;
        Uri uri4;
        Uri uri5;
        Object i10;
        if (continuation instanceof MediaResolver$handleVideo$1) {
            mediaResolver$handleVideo$1 = (MediaResolver$handleVideo$1) continuation;
            int i11 = mediaResolver$handleVideo$1.label;
            if ((i11 & Integer.MIN_VALUE) != 0) {
                mediaResolver$handleVideo$1.label = i11 - Integer.MIN_VALUE;
                MediaResolver$handleVideo$1 mediaResolver$handleVideo$13 = mediaResolver$handleVideo$1;
                Object obj = mediaResolver$handleVideo$13.result;
                ko.a aVar = ko.a.f13464d;
                i5 = mediaResolver$handleVideo$13.label;
                if (i5 != 0) {
                    b.R(obj);
                    fromFile = Uri.fromFile(ContentResolverUtils.createTempFile$default(ContentResolverUtils.INSTANCE, getResolver(), uri, null, "mp4", 2, null));
                    try {
                        q qVar = Result.f13476e;
                        i6 = new DiscordVideoMediaSource(this.context, uri);
                    } catch (Throwable th2) {
                        q qVar2 = Result.f13476e;
                        i6 = b.i(th2);
                    }
                    Throwable a = Result.a(i6);
                    if (a != null) {
                        logMediaError("Media source error", "[" + a + "] Error creating source: " + a.getMessage(), uri, fromFile);
                    }
                    if (i6 instanceof r) {
                        i6 = null;
                    }
                    discordVideoMediaSource = (DiscordVideoMediaSource) i6;
                    if (discordVideoMediaSource != null) {
                        if (z5) {
                            mediaResolver = this;
                            uri5 = uri;
                            uri2 = uri5;
                            uri3 = fromFile;
                            mediaResolver$handleVideo$12 = mediaResolver$handleVideo$13;
                            Uri createMP4FastStartUri = mediaResolver.createMP4FastStartUri(uri2, uri5, discordVideoMediaSource.getSize());
                            return createMP4FastStartUri == null ? uri5 : createMP4FastStartUri;
                        }
                        if (encodingConfig != null) {
                            try {
                                Transcoder transcoder = Transcoder.INSTANCE;
                                String requestId = getRequestId(uri);
                                Context context = this.context;
                                b7.a aVar2 = new b7.a(26, this, uri);
                                mediaResolver$handleVideo$13.L$0 = uri;
                                mediaResolver$handleVideo$13.L$1 = fromFile;
                                mediaResolver$handleVideo$13.L$2 = discordVideoMediaSource;
                                mediaResolver$handleVideo$13.L$3 = this;
                                mediaResolver$handleVideo$13.label = 1;
                                obj = transcoder.convertCompress(requestId, context, discordVideoMediaSource, fromFile, encodingConfig, aVar2, mediaResolver$handleVideo$13);
                                mediaResolver$handleVideo$12 = mediaResolver$handleVideo$13;
                                if (obj != aVar) {
                                    mediaResolver = this;
                                    uri2 = uri;
                                    uri3 = fromFile;
                                }
                            } catch (Throwable th3) {
                                th = th3;
                                mediaResolver$handleVideo$12 = mediaResolver$handleVideo$13;
                            }
                        } else {
                            mediaResolver$handleVideo$12 = mediaResolver$handleVideo$13;
                            try {
                                throw new IllegalArgumentException("encodingConfig is required");
                            } catch (Throwable th4) {
                                th = th4;
                            }
                        }
                        uri4 = uri;
                        q qVar3 = Result.f13476e;
                        i10 = b.i(th);
                        Throwable a10 = Result.a(i10);
                        if (a10 != null) {
                            if (a10 instanceof CancellationException) {
                                throw a10;
                            }
                            logMediaError("Media conversion error", a3.e.k("Error compressing/converting video: ", a10.getMessage()), uri4, fromFile);
                            mediaResolver$handleVideo$12.L$0 = null;
                            mediaResolver$handleVideo$12.L$1 = null;
                            mediaResolver$handleVideo$12.L$2 = null;
                            mediaResolver$handleVideo$12.L$3 = null;
                            mediaResolver$handleVideo$12.label = 2;
                            obj = copyToFile$default(this, uri4, null, mediaResolver$handleVideo$12, 2, null);
                        }
                        return (Uri) i10;
                    }
                    mediaResolver$handleVideo$13.label = 3;
                    Object copyToFile$default = copyToFile$default(this, uri, null, mediaResolver$handleVideo$13, 2, null);
                    if (copyToFile$default != aVar) {
                        return copyToFile$default;
                    }
                    return aVar;
                }
                if (i5 != 1) {
                    if (i5 == 2) {
                        b.R(obj);
                        i10 = (Uri) obj;
                        return (Uri) i10;
                    }
                    if (i5 != 3) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    b.R(obj);
                    return obj;
                }
                MediaResolver mediaResolver2 = (MediaResolver) mediaResolver$handleVideo$13.L$3;
                DiscordVideoMediaSource discordVideoMediaSource2 = (DiscordVideoMediaSource) mediaResolver$handleVideo$13.L$2;
                uri3 = (Uri) mediaResolver$handleVideo$13.L$1;
                Uri uri6 = (Uri) mediaResolver$handleVideo$13.L$0;
                try {
                    b.R(obj);
                    discordVideoMediaSource = discordVideoMediaSource2;
                    mediaResolver = mediaResolver2;
                    uri2 = uri6;
                    mediaResolver$handleVideo$12 = mediaResolver$handleVideo$13;
                } catch (Throwable th5) {
                    th = th5;
                    fromFile = uri3;
                    uri4 = uri6;
                    mediaResolver$handleVideo$12 = mediaResolver$handleVideo$13;
                }
                uri5 = (Uri) obj;
                Uri createMP4FastStartUri2 = mediaResolver.createMP4FastStartUri(uri2, uri5, discordVideoMediaSource.getSize());
                if (createMP4FastStartUri2 == null) {
                }
            }
        }
        mediaResolver$handleVideo$1 = new MediaResolver$handleVideo$1(this, continuation);
        MediaResolver$handleVideo$1 mediaResolver$handleVideo$132 = mediaResolver$handleVideo$1;
        Object obj2 = mediaResolver$handleVideo$132.result;
        ko.a aVar3 = ko.a.f13464d;
        i5 = mediaResolver$handleVideo$132.label;
        if (i5 != 0) {
        }
        uri5 = (Uri) obj2;
        Uri createMP4FastStartUri22 = mediaResolver.createMP4FastStartUri(uri2, uri5, discordVideoMediaSource.getSize());
        if (createMP4FastStartUri22 == null) {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit handleVideo$lambda$4$lambda$3(MediaResolver mediaResolver, Uri uri, float f2) {
        mediaResolver.onProgress.invoke(uri, Integer.valueOf((int) (f2 * 100)));
        return Unit.a;
    }

    private final void logMediaError(String tag, String message, Uri inputUri, Uri outputUri) {
        CrashReporting crashReporting = CrashReporting.INSTANCE;
        CrashReporting.addBreadcrumb$default(crashReporting, message, v0.g(new Pair("inputUri", inputUri.toString()), new Pair("outputUri", outputUri.toString())), null, null, false, 28, null);
        crashReporting.captureMessage(tag, message, CrashReporting.ErrorLevel.WARNING);
    }

    public final void cancel(@NotNull Uri inputUri) {
        Intrinsics.checkNotNullParameter(inputUri, "inputUri");
        Transcoder.INSTANCE.cancel(getRequestId(inputUri));
    }

    public final String getMimeType(@NotNull Uri uri) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        return getResolver().getType(uri);
    }

    @NotNull
    public final Map<String, Object> handleVideoMetadata(@NotNull Uri inputUri) {
        Intrinsics.checkNotNullParameter(inputUri, "inputUri");
        return new DiscordVideoMediaSource(this.context, inputUri).getMetadata();
    }

    public final Object resolveToUri$media_release(@NotNull Uri uri, int i5, boolean z5, boolean z6, boolean z7, EncodingConfig encodingConfig, boolean z8, @NotNull Continuation continuation) {
        e eVar = g0.a;
        return x.A(d.f19093i, new MediaResolver$resolveToUri$2(this, uri, z6, encodingConfig, i5, z5, z7, z8, null), continuation);
    }
}
