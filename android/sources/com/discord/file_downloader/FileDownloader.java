package com.discord.file_downloader;

import a4.h;
import android.content.Context;
import com.discord.resource_usage.DeviceResourceUsageRecorder;
import fo.l;
import java.io.File;
import java.util.Iterator;
import java.util.Map;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.flow.Flow;
import okhttp3.Interceptor;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010$\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J.\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0014\b\u0002\u0010\u000e\u001a\u000e\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\r0\u000f2\b\b\u0002\u0010\u0010\u001a\u00020\u0005J:\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00130\u00122\u0006\u0010\u0014\u001a\u00020\u00152\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u0016\u001a\u00020\r2\b\b\u0002\u0010\u0017\u001a\u00020\u00182\b\b\u0002\u0010\u0019\u001a\u00020\u001aH\u0007R\u001b\u0010\u0004\u001a\u00020\u00058BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\b\u0010\t\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u001b"}, d2 = {"Lcom/discord/file_downloader/FileDownloader;", "", "<init>", "()V", "defaultClient", "Lokhttp3/OkHttpClient;", "getDefaultClient", "()Lokhttp3/OkHttpClient;", "defaultClient$delegate", "Lkotlin/Lazy;", "downloadBlob", "Lokhttp3/Response;", "fileUrl", "", "headers", "", "client", "downloadFile", "Lkotlinx/coroutines/flow/Flow;", "Lcom/discord/file_downloader/DownloadState;", "context", "Landroid/content/Context;", "fileName", "downloadDirectory", "Ljava/io/File;", "logErrors", "", "file_downloader_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nFileDownloader.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FileDownloader.kt\ncom/discord/file_downloader/FileDownloader\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 OkHttpClient.kt\nokhttp3/OkHttpClient$Builder\n*L\n1#1,88:1\n1869#2,2:89\n563#3:91\n*S KotlinDebug\n*F\n+ 1 FileDownloader.kt\ncom/discord/file_downloader/FileDownloader\n*L\n33#1:89,2\n21#1:91\n*E\n"})
/* loaded from: classes.dex */
public final class FileDownloader {

    @NotNull
    public static final FileDownloader INSTANCE = new FileDownloader();

    /* renamed from: defaultClient$delegate, reason: from kotlin metadata */
    @NotNull
    private static final Lazy defaultClient = l.a(new com.discord.chat.reactevents.a(16));

    private FileDownloader() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final OkHttpClient defaultClient_delegate$lambda$0() {
        OkHttpClient.Builder builder = new OkHttpClient.Builder();
        final DeviceResourceUsageRecorder.Companion companion = DeviceResourceUsageRecorder.INSTANCE;
        Interceptor interceptor = new Interceptor() { // from class: com.discord.file_downloader.FileDownloader$defaultClient_delegate$lambda$0$$inlined$-addInterceptor$1
            @Override // okhttp3.Interceptor
            @NotNull
            public final Response intercept(@NotNull Interceptor.Chain chain) {
                Intrinsics.checkNotNullParameter(chain, "chain");
                return DeviceResourceUsageRecorder.Companion.this.downloadInterceptor(chain);
            }
        };
        Intrinsics.checkNotNullParameter(interceptor, "interceptor");
        builder.f16054c.add(interceptor);
        return new OkHttpClient(builder);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ Response downloadBlob$default(FileDownloader fileDownloader, String str, Map map, OkHttpClient okHttpClient, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            map = v0.d();
        }
        if ((i5 & 4) != 0) {
            okHttpClient = fileDownloader.getDefaultClient();
        }
        return fileDownloader.downloadBlob(str, map, okHttpClient);
    }

    public static /* synthetic */ Flow downloadFile$default(FileDownloader fileDownloader, Context context, String str, String str2, File file, boolean z5, int i5, Object obj) {
        if ((i5 & 8) != 0) {
            file = context.getCacheDir();
        }
        File file2 = file;
        if ((i5 & 16) != 0) {
            z5 = false;
        }
        return fileDownloader.downloadFile(context, str, str2, file2, z5);
    }

    private final OkHttpClient getDefaultClient() {
        return (OkHttpClient) defaultClient.getValue();
    }

    @NotNull
    public final Response downloadBlob(@NotNull String fileUrl, @NotNull Map<String, String> headers, @NotNull OkHttpClient client) {
        Intrinsics.checkNotNullParameter(fileUrl, "fileUrl");
        Intrinsics.checkNotNullParameter(headers, "headers");
        Intrinsics.checkNotNullParameter(client, "client");
        Request.Builder builder = new Request.Builder();
        Iterator<T> it = headers.entrySet().iterator();
        while (it.hasNext()) {
            Map.Entry entry = (Map.Entry) it.next();
            builder.a((String) entry.getKey(), (String) entry.getValue());
        }
        builder.i(fileUrl);
        return client.a(builder.b()).e();
    }

    @NotNull
    public final Flow downloadFile(@NotNull Context context, @NotNull String fileUrl, @NotNull String fileName, @NotNull File downloadDirectory, boolean logErrors) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(fileUrl, "fileUrl");
        Intrinsics.checkNotNullParameter(fileName, "fileName");
        Intrinsics.checkNotNullParameter(downloadDirectory, "downloadDirectory");
        return new h(new FileDownloader$downloadFile$1(downloadDirectory, fileName, fileUrl, logErrors, null));
    }
}
