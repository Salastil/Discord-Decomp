package com.facebook.react.views.image;

import android.graphics.Bitmap;
import com.facebook.cache.common.CacheKey;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory;
import com.facebook.imagepipeline.request.Postprocessor;
import j8.a;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\b\u0005\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u0000 \u00122\u00020\u0001:\u0001\u0012B\u0017\b\u0002\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00010\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\b\u001a\u00020\tH\u0016J\b\u0010\n\u001a\u00020\u000bH\u0016J\u001e\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u000e0\r2\u0006\u0010\u000f\u001a\u00020\u000e2\u0006\u0010\u0010\u001a\u00020\u0011H\u0016R\u001a\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00010\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0013"}, d2 = {"Lcom/facebook/react/views/image/MultiPostprocessor;", "Lcom/facebook/imagepipeline/request/Postprocessor;", "postprocessors", "", "<init>", "(Ljava/util/List;)V", "getPostprocessors$ReactAndroid_release", "()Ljava/util/List;", "getName", "", "getPostprocessorCacheKey", "Lcom/facebook/cache/common/CacheKey;", "process", "Lcom/facebook/common/references/CloseableReference;", "Landroid/graphics/Bitmap;", "sourceBitmap", "bitmapFactory", "Lcom/facebook/imagepipeline/bitmaps/PlatformBitmapFactory;", "Companion", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nMultiPostprocessor.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MultiPostprocessor.kt\ncom/facebook/react/views/image/MultiPostprocessor\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,62:1\n1563#2:63\n1634#2,3:64\n*S KotlinDebug\n*F\n+ 1 MultiPostprocessor.kt\ncom/facebook/react/views/image/MultiPostprocessor\n*L\n26#1:63\n26#1:64,3\n*E\n"})
/* loaded from: classes3.dex */
public final class MultiPostprocessor implements Postprocessor {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final List<Postprocessor> postprocessors;

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0018\u0010\u0004\u001a\u0004\u0018\u00010\u00052\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00050\u0007H\u0007¨\u0006\b"}, d2 = {"Lcom/facebook/react/views/image/MultiPostprocessor$Companion;", "", "<init>", "()V", "from", "Lcom/facebook/imagepipeline/request/Postprocessor;", "postprocessors", "", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        public final Postprocessor from(@NotNull List<? extends Postprocessor> postprocessors) {
            Intrinsics.checkNotNullParameter(postprocessors, "postprocessors");
            int size = postprocessors.size();
            DefaultConstructorMarker defaultConstructorMarker = null;
            if (size != 0) {
                return size != 1 ? new MultiPostprocessor(postprocessors, defaultConstructorMarker) : postprocessors.get(0);
            }
            return null;
        }

        private Companion() {
        }
    }

    public /* synthetic */ MultiPostprocessor(List list, DefaultConstructorMarker defaultConstructorMarker) {
        this(list);
    }

    public static final Postprocessor from(@NotNull List<? extends Postprocessor> list) {
        return INSTANCE.from(list);
    }

    @Override // com.facebook.imagepipeline.request.Postprocessor
    @NotNull
    public String getName() {
        return h.f("MultiPostProcessor (", CollectionsKt.O(this.postprocessors, ",", null, null, null, 62), ")");
    }

    @Override // com.facebook.imagepipeline.request.Postprocessor
    @NotNull
    public CacheKey getPostprocessorCacheKey() {
        List<Postprocessor> list = this.postprocessors;
        ArrayList arrayList = new ArrayList(d0.l(list, 10));
        Iterator<T> it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(((Postprocessor) it.next()).getPostprocessorCacheKey());
        }
        return new a(arrayList);
    }

    @NotNull
    public final List<Postprocessor> getPostprocessors$ReactAndroid_release() {
        return this.postprocessors;
    }

    @Override // com.facebook.imagepipeline.request.Postprocessor
    @NotNull
    public CloseableReference process(@NotNull Bitmap sourceBitmap, @NotNull PlatformBitmapFactory bitmapFactory) {
        Intrinsics.checkNotNullParameter(sourceBitmap, "sourceBitmap");
        Intrinsics.checkNotNullParameter(bitmapFactory, "bitmapFactory");
        CloseableReference closeableReference = null;
        try {
            Iterator<Postprocessor> it = this.postprocessors.iterator();
            CloseableReference closeableReference2 = null;
            while (it.hasNext()) {
                closeableReference = it.next().process(closeableReference2 != null ? (Bitmap) closeableReference2.q() : sourceBitmap, bitmapFactory);
                CloseableReference.l(closeableReference2);
                closeableReference2 = closeableReference.clone();
            }
            if (closeableReference != null) {
                CloseableReference clone = closeableReference.clone();
                Intrinsics.checkNotNullExpressionValue(clone, "clone(...)");
                closeableReference.close();
                return clone;
            }
            throw new IllegalStateException(("MultiPostprocessor returned null bitmap - Number of Postprocessors: " + this.postprocessors.size()).toString());
        } catch (Throwable th2) {
            CloseableReference.l(null);
            throw th2;
        }
    }

    private MultiPostprocessor(List<? extends Postprocessor> list) {
        this.postprocessors = new LinkedList(list);
    }
}
