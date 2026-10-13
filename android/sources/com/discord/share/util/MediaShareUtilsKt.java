package com.discord.share.util;

import android.content.Context;
import android.net.Uri;
import androidx.core.content.FileProvider;
import com.discord.image.fresco.FrescoFetchEncodedImageKt;
import com.discord.media_player.CacheDataSourceFactory;
import com.facebook.imagepipeline.core.ImagePipeline;
import java.io.File;
import java.io.IOException;
import java.util.UUID;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import nr.x;
import org.jetbrains.annotations.NotNull;
import org.webrtc.MediaStreamTrack;

@Metadata(d1 = {"\u0000$\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\u001a.\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u00012\u0006\u0010\t\u001a\u00020\u00012\u0006\u0010\n\u001a\u00020\u0001H\u0086@¢\u0006\u0002\u0010\u000b\u001a\u001c\u0010\f\u001a\u00020\r*\u00020\u00072\u0006\u0010\u000e\u001a\u00020\u00012\u0006\u0010\u000f\u001a\u00020\u0001H\u0002\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0003X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0010"}, d2 = {"SHARE_MEDIA_DIR", "", "STALE_FILE_AGE_MS", "", "stageShareableMedia", "Landroid/net/Uri;", "context", "Landroid/content/Context;", "url", "fileExtension", "mediaType", "(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "prepareShareDestination", "Ljava/io/File;", "subDir", "extension", "share_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nMediaShareUtils.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaShareUtils.kt\ncom/discord/share/util/MediaShareUtilsKt\n+ 2 CoroutineScope.kt\nkotlinx/coroutines/CoroutineScopeKt\n+ 3 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,64:1\n375#2:65\n13472#3,2:66\n*S KotlinDebug\n*F\n+ 1 MediaShareUtils.kt\ncom/discord/share/util/MediaShareUtilsKt\n*L\n40#1:65\n57#1:66,2\n*E\n"})
/* loaded from: classes.dex */
public final class MediaShareUtilsKt {

    @NotNull
    private static final String SHARE_MEDIA_DIR = "share-media";
    private static final long STALE_FILE_AGE_MS = 600000;

    private static final File prepareShareDestination(Context context, String str, String str2) {
        File file = new File(context.getCacheDir(), str);
        long currentTimeMillis = System.currentTimeMillis() - STALE_FILE_AGE_MS;
        File[] listFiles = file.listFiles();
        if (listFiles != null) {
            for (File file2 : listFiles) {
                if (file2.lastModified() < currentTimeMillis) {
                    file2.delete();
                }
            }
        }
        return new File(file, UUID.randomUUID() + "." + str2);
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x008e A[Catch: all -> 0x0062, TryCatch #0 {all -> 0x0062, blocks: (B:13:0x007f, B:14:0x0085, B:16:0x008e, B:19:0x00ab, B:20:0x00c4, B:29:0x0052, B:31:0x005b, B:32:0x0065), top: B:28:0x0052 }] */
    /* JADX WARN: Removed duplicated region for block: B:19:0x00ab A[Catch: all -> 0x0062, TryCatch #0 {all -> 0x0062, blocks: (B:13:0x007f, B:14:0x0085, B:16:0x008e, B:19:0x00ab, B:20:0x00c4, B:29:0x0052, B:31:0x005b, B:32:0x0065), top: B:28:0x0052 }] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0048  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0023  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Object stageShareableMedia(@NotNull Context context, @NotNull String str, @NotNull String str2, @NotNull String str3, @NotNull Continuation continuation) {
        MediaShareUtilsKt$stageShareableMedia$1 mediaShareUtilsKt$stageShareableMedia$1;
        int i5;
        File prepareShareDestination;
        File file;
        boolean copyVideoToFile;
        if (continuation instanceof MediaShareUtilsKt$stageShareableMedia$1) {
            mediaShareUtilsKt$stageShareableMedia$1 = (MediaShareUtilsKt$stageShareableMedia$1) continuation;
            int i6 = mediaShareUtilsKt$stageShareableMedia$1.label;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                mediaShareUtilsKt$stageShareableMedia$1.label = i6 - Integer.MIN_VALUE;
                Object obj = mediaShareUtilsKt$stageShareableMedia$1.result;
                a aVar = a.f13464d;
                i5 = mediaShareUtilsKt$stageShareableMedia$1.label;
                if (i5 != 0) {
                    b.R(obj);
                    prepareShareDestination = prepareShareDestination(context, SHARE_MEDIA_DIR, str2);
                    try {
                        if (Intrinsics.areEqual(str3, MediaStreamTrack.VIDEO_TRACK_KIND)) {
                            copyVideoToFile = CacheDataSourceFactory.INSTANCE.copyVideoToFile(str, prepareShareDestination);
                            x.l(mediaShareUtilsKt$stageShareableMedia$1.getContext());
                            if (!copyVideoToFile) {
                                throw new IOException("Could not stage " + str3 + " for " + str);
                            }
                            Uri uriForFile = FileProvider.getUriForFile(context, context.getPackageName() + ".file-provider", prepareShareDestination);
                            Intrinsics.checkNotNull(uriForFile);
                            return uriForFile;
                        }
                        ImagePipeline r5 = d9.a.r();
                        Intrinsics.checkNotNullExpressionValue(r5, "getImagePipeline(...)");
                        mediaShareUtilsKt$stageShareableMedia$1.L$0 = context;
                        mediaShareUtilsKt$stageShareableMedia$1.L$1 = str;
                        mediaShareUtilsKt$stageShareableMedia$1.L$2 = str3;
                        mediaShareUtilsKt$stageShareableMedia$1.L$3 = prepareShareDestination;
                        mediaShareUtilsKt$stageShareableMedia$1.label = 1;
                        obj = FrescoFetchEncodedImageKt.fetchEncodedImageToFile(r5, str, prepareShareDestination, context, mediaShareUtilsKt$stageShareableMedia$1);
                        if (obj == aVar) {
                            return aVar;
                        }
                    } catch (Throwable th2) {
                        th = th2;
                        file = prepareShareDestination;
                        file.delete();
                        throw th;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    file = (File) mediaShareUtilsKt$stageShareableMedia$1.L$3;
                    str3 = (String) mediaShareUtilsKt$stageShareableMedia$1.L$2;
                    str = (String) mediaShareUtilsKt$stageShareableMedia$1.L$1;
                    Context context2 = (Context) mediaShareUtilsKt$stageShareableMedia$1.L$0;
                    try {
                        b.R(obj);
                        prepareShareDestination = file;
                        context = context2;
                    } catch (Throwable th3) {
                        th = th3;
                        file.delete();
                        throw th;
                    }
                }
                copyVideoToFile = ((Boolean) obj).booleanValue();
                x.l(mediaShareUtilsKt$stageShareableMedia$1.getContext());
                if (!copyVideoToFile) {
                }
            }
        }
        mediaShareUtilsKt$stageShareableMedia$1 = new MediaShareUtilsKt$stageShareableMedia$1(continuation);
        Object obj2 = mediaShareUtilsKt$stageShareableMedia$1.result;
        a aVar2 = a.f13464d;
        i5 = mediaShareUtilsKt$stageShareableMedia$1.label;
        if (i5 != 0) {
        }
        copyVideoToFile = ((Boolean) obj2).booleanValue();
        x.l(mediaShareUtilsKt$stageShareableMedia$1.getContext());
        if (!copyVideoToFile) {
        }
    }
}
