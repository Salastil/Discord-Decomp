package com.discord.image.fresco;

import android.net.Uri;
import com.facebook.common.references.CloseableReference;
import com.facebook.datasource.DataSource;
import com.facebook.imagepipeline.core.ImagePipeline;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.imagepipeline.request.ImageRequestBuilder;
import fo.q;
import fo.r;
import java.io.File;
import java.io.FileOutputStream;
import ko.f;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CancellableContinuation;
import nr.j;
import org.jetbrains.annotations.NotNull;
import y8.a;
import y8.b;

@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\u001a0\u0010\b\u001a\u00020\u0007*\u00020\u00002\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0005H\u0086@¢\u0006\u0004\b\b\u0010\t\u001a2\u0010\b\u001a\u00020\u0007*\u00020\u00002\b\u0010\u0002\u001a\u0004\u0018\u00010\n2\u0006\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0005H\u0086@¢\u0006\u0004\b\b\u0010\u000b\u001a!\u0010\u000e\u001a\u00020\u0007*\b\u0012\u0004\u0012\u00020\r0\f2\u0006\u0010\u0004\u001a\u00020\u0003H\u0002¢\u0006\u0004\b\u000e\u0010\u000f¨\u0006\u0010"}, d2 = {"Lcom/facebook/imagepipeline/core/ImagePipeline;", "", "uri", "Ljava/io/File;", "destination", "", "callerContext", "", "fetchEncodedImageToFile", "(Lcom/facebook/imagepipeline/core/ImagePipeline;Ljava/lang/String;Ljava/io/File;Ljava/lang/Object;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "Landroid/net/Uri;", "(Lcom/facebook/imagepipeline/core/ImagePipeline;Landroid/net/Uri;Ljava/io/File;Ljava/lang/Object;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "Lcom/facebook/common/references/CloseableReference;", "Lqa/q;", "writeToFile", "(Lcom/facebook/common/references/CloseableReference;Ljava/io/File;)Z", "fresco_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nFrescoFetchEncodedImage.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FrescoFetchEncodedImage.kt\ncom/discord/image/fresco/FrescoFetchEncodedImageKt\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 Uri.kt\nandroidx/core/net/UriKt\n+ 4 CancellableContinuation.kt\nkotlinx/coroutines/CancellableContinuationKt\n*L\n1#1,76:1\n1#2:77\n29#3:78\n426#4,11:79\n*S KotlinDebug\n*F\n+ 1 FrescoFetchEncodedImage.kt\ncom/discord/image/fresco/FrescoFetchEncodedImageKt\n*L\n31#1:78\n46#1:79,11\n*E\n"})
/* loaded from: classes.dex */
public final class FrescoFetchEncodedImageKt {
    public static final Object fetchEncodedImageToFile(@NotNull ImagePipeline imagePipeline, Uri uri, @NotNull final File file, Object obj, @NotNull Continuation frame) {
        if (uri == null) {
            return Boolean.FALSE;
        }
        ImageRequestBuilder d6 = ImageRequestBuilder.d(uri);
        Intrinsics.checkNotNullExpressionValue(d6, "newBuilderWithSource(...)");
        ImageRequest a = DiskCachePolicyKt.applyDiscordDiskCachePolicy(d6, uri).a();
        Intrinsics.checkNotNull(a);
        final a b10 = imagePipeline.b(a, obj);
        final j jVar = new j(1, f.b(frame));
        jVar.t();
        jVar.v(new Function1<Throwable, Unit>() { // from class: com.discord.image.fresco.FrescoFetchEncodedImageKt$fetchEncodedImageToFile$4$1
            @Override // kotlin.jvm.functions.Function1
            public /* bridge */ /* synthetic */ Object invoke(Object obj2) {
                invoke((Throwable) obj2);
                return Unit.a;
            }

            public final void invoke(Throwable th2) {
                DataSource.this.close();
            }
        });
        b10.d(new b() { // from class: com.discord.image.fresco.FrescoFetchEncodedImageKt$fetchEncodedImageToFile$4$2
            @Override // y8.b
            public void onFailureImpl(DataSource dataSource) {
                Intrinsics.checkNotNullParameter(dataSource, "dataSource");
                if (CancellableContinuation.this.c()) {
                    CancellableContinuation cancellableContinuation = CancellableContinuation.this;
                    q qVar = Result.f13476e;
                    cancellableContinuation.resumeWith(Boolean.FALSE);
                }
            }

            @Override // y8.b
            public void onNewResultImpl(DataSource dataSource) {
                Intrinsics.checkNotNullParameter(dataSource, "dataSource");
                if (dataSource.isFinished() && CancellableContinuation.this.c()) {
                    CancellableContinuation cancellableContinuation = CancellableContinuation.this;
                    CloseableReference closeableReference = (CloseableReference) dataSource.getResult();
                    Boolean valueOf = Boolean.valueOf(closeableReference != null ? FrescoFetchEncodedImageKt.writeToFile(closeableReference, file) : false);
                    q qVar = Result.f13476e;
                    cancellableContinuation.resumeWith(valueOf);
                }
            }
        }, m8.a.f14400d);
        Object r5 = jVar.r();
        if (r5 == ko.a.f13464d) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return r5;
    }

    public static /* synthetic */ Object fetchEncodedImageToFile$default(ImagePipeline imagePipeline, String str, File file, Object obj, Continuation continuation, int i5, Object obj2) {
        if ((i5 & 4) != 0) {
            obj = null;
        }
        return fetchEncodedImageToFile(imagePipeline, str, file, obj, continuation);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean writeToFile(CloseableReference closeableReference, File file) {
        try {
            File parentFile = file.getParentFile();
            if (parentFile != null) {
                parentFile.mkdirs();
            }
            try {
                FileOutputStream fileOutputStream = new FileOutputStream(file);
                try {
                    com.facebook.imagepipeline.nativecode.b.h(new r8.f((qa.q) closeableReference.q()), fileOutputStream, 8192);
                    fileOutputStream.close();
                    closeableReference.close();
                    return true;
                } finally {
                }
            } finally {
            }
        } catch (Exception unused) {
            return false;
        }
    }

    public static /* synthetic */ Object fetchEncodedImageToFile$default(ImagePipeline imagePipeline, Uri uri, File file, Object obj, Continuation continuation, int i5, Object obj2) {
        if ((i5 & 4) != 0) {
            obj = null;
        }
        return fetchEncodedImageToFile(imagePipeline, uri, file, obj, continuation);
    }

    public static final Object fetchEncodedImageToFile(@NotNull ImagePipeline imagePipeline, @NotNull String str, @NotNull File file, Object obj, @NotNull Continuation continuation) {
        Object i5;
        try {
            q qVar = Result.f13476e;
            i5 = Uri.parse(str);
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        if (i5 instanceof r) {
            i5 = null;
        }
        return fetchEncodedImageToFile(imagePipeline, (Uri) i5, file, obj, continuation);
    }
}
