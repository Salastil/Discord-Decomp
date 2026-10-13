package com.discord.notifications.renderer.utils;

import android.content.Context;
import android.webkit.MimeTypeMap;
import androidx.core.content.FileProvider;
import com.discord.crash_reporting.CrashReporting;
import com.discord.file_downloader.FileDownloader;
import com.facebook.imagepipeline.nativecode.c;
import com.reactnativecommunity.clipboard.ClipboardModule;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.Locale;
import ki.b;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import okhttp3.MediaType;
import okhttp3.Response;
import okhttp3.ResponseBody;

@Metadata(d1 = {"\u0000\u0014\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\u0018\u0002\u0010\u0000\u001a\u0018\u0012\f\u0012\n \u0003*\u0004\u0018\u00010\u00020\u0002\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0001*\u00020\u0005H\n"}, d2 = {"<anonymous>", "Lkotlin/Pair;", "Landroid/net/Uri;", "kotlin.jvm.PlatformType", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.notifications.renderer.utils.NotificationImageCacheKt$storeRemoteImageViaFileProvider$2", f = "NotificationImageCache.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nNotificationImageCache.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NotificationImageCache.kt\ncom/discord/notifications/renderer/utils/NotificationImageCacheKt$storeRemoteImageViaFileProvider$2\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,81:1\n1#2:82\n*E\n"})
/* loaded from: classes.dex */
public final class NotificationImageCacheKt$storeRemoteImageViaFileProvider$2 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Context $context;
    final /* synthetic */ String $imageUrl;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public NotificationImageCacheKt$storeRemoteImageViaFileProvider$2(Context context, String str, Continuation continuation) {
        super(2, continuation);
        this.$context = context;
        this.$imageUrl = str;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new NotificationImageCacheKt$storeRemoteImageViaFileProvider$2(this.$context, this.$imageUrl, continuation);
    }

    /* JADX WARN: Code restructure failed: missing block: B:73:0x0149, code lost:
    
        if (r2 == null) goto L79;
     */
    /* JADX WARN: Code restructure failed: missing block: B:74:0x014c, code lost:
    
        return null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:75:0x013d, code lost:
    
        r2.close();
     */
    /* JADX WARN: Code restructure failed: missing block: B:80:0x013b, code lost:
    
        if (r2 == null) goto L79;
     */
    /* JADX WARN: Removed duplicated region for block: B:31:0x007e  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00c0 A[Catch: all -> 0x0045, IOException -> 0x0149, TryCatch #9 {IOException -> 0x0149, all -> 0x0045, blocks: (B:7:0x0024, B:13:0x0030, B:15:0x0038, B:17:0x004b, B:19:0x0057, B:21:0x005f, B:23:0x0063, B:29:0x0074, B:32:0x0080, B:34:0x00c0, B:36:0x00c5, B:44:0x00d9, B:62:0x010f, B:63:0x0112), top: B:6:0x0024 }] */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Response response;
        String str;
        String extensionFromMimeType;
        File parentFile;
        InputStream byteStream;
        String str2;
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        try {
            NotificationImageCacheKt.enforceNotificationsCacheTTL(NotificationImageCacheKt.getNotificationsDir(this.$context));
            response = FileDownloader.downloadBlob$default(FileDownloader.INSTANCE, this.$imageUrl, null, null, 6, null);
            try {
                boolean g6 = response.g();
                ResponseBody responseBody = response.f16091y;
                if (!g6) {
                    response.close();
                    return null;
                }
                String fileExtensionFromUrl = MimeTypeMap.getFileExtensionFromUrl(this.$imageUrl);
                if (fileExtensionFromUrl != null) {
                    str = fileExtensionFromUrl.toLowerCase(Locale.ROOT);
                    Intrinsics.checkNotNullExpressionValue(str, "toLowerCase(...)");
                } else {
                    str = null;
                }
                String mimeTypeFromExtension = str != null ? MimeTypeMap.getSingleton().getMimeTypeFromExtension(str) : null;
                MediaType contentType = responseBody != null ? responseBody.contentType() : null;
                if (contentType != null && (str2 = contentType.a) != null) {
                    if (StringsKt.K(str2)) {
                        str2 = null;
                    }
                    if (str2 != null) {
                        mimeTypeFromExtension = str2;
                        extensionFromMimeType = MimeTypeMap.getSingleton().getExtensionFromMimeType(mimeTypeFromExtension);
                        if (extensionFromMimeType == null) {
                            extensionFromMimeType = "jpg";
                        }
                        long currentTimeMillis = System.currentTimeMillis();
                        wo.d.f19972d.getClass();
                        File file = new File(NotificationImageCacheKt.getNotificationsDir(this.$context), "discord_" + currentTimeMillis + "_" + wo.d.f19973e.c(1, 100000) + "." + extensionFromMimeType);
                        parentFile = file.getParentFile();
                        if (parentFile != null) {
                            parentFile.mkdirs();
                        }
                        if (responseBody != null || (byteStream = responseBody.byteStream()) == null) {
                            response.close();
                            return null;
                        }
                        try {
                            FileOutputStream fileOutputStream = new FileOutputStream(file);
                            try {
                                com.facebook.imagepipeline.nativecode.b.h(byteStream, fileOutputStream, 8192);
                                fileOutputStream.close();
                                byteStream.close();
                                Pair pair = new Pair(FileProvider.getUriForFile(this.$context, this.$context.getPackageName() + ".file-provider", file), mimeTypeFromExtension);
                                response.close();
                                return pair;
                            } finally {
                            }
                        } catch (Throwable th2) {
                            try {
                                throw th2;
                            } catch (Throwable th3) {
                                c.j(byteStream, th2);
                                throw th3;
                            }
                        }
                    }
                }
                if (mimeTypeFromExtension == null) {
                    mimeTypeFromExtension = ClipboardModule.MIMETYPE_JPEG;
                }
                extensionFromMimeType = MimeTypeMap.getSingleton().getExtensionFromMimeType(mimeTypeFromExtension);
                if (extensionFromMimeType == null) {
                }
                long currentTimeMillis2 = System.currentTimeMillis();
                wo.d.f19972d.getClass();
                File file2 = new File(NotificationImageCacheKt.getNotificationsDir(this.$context), "discord_" + currentTimeMillis2 + "_" + wo.d.f19973e.c(1, 100000) + "." + extensionFromMimeType);
                parentFile = file2.getParentFile();
                if (parentFile != null) {
                }
                if (responseBody != null) {
                }
                response.close();
                return null;
            } catch (IOException unused) {
            } catch (Throwable th4) {
                th = th4;
                try {
                    CrashReporting crashReporting = CrashReporting.INSTANCE;
                    CrashReporting.addBreadcrumb$default(crashReporting, "storeRemoteImageViaFileProvider url=" + this.$imageUrl, null, null, null, false, 30, null);
                    CrashReporting.captureException$default(crashReporting, th, false, 2, null);
                } finally {
                }
            }
        } catch (IOException unused2) {
            response = null;
        } catch (Throwable th5) {
            th = th5;
            response = null;
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((NotificationImageCacheKt$storeRemoteImageViaFileProvider$2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
