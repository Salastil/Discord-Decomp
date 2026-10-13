package com.discord.core;

import android.content.Context;
import android.graphics.Bitmap;
import android.net.Uri;
import android.util.Size;
import android.widget.ImageView;
import androidx.recyclerview.widget.h0;
import com.discord.crash_reporting.CrashReporting;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.facebook.drawee.view.SimpleDraweeView;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.core.LocalImageThumbnailView$setLocalImageSource$1", f = "LocalImageThumbnailView.kt", l = {65}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class LocalImageThumbnailView$setLocalImageSource$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ int $heightDp;
    final /* synthetic */ Uri $uri;
    final /* synthetic */ int $widthDp;
    int label;
    final /* synthetic */ LocalImageThumbnailView this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public LocalImageThumbnailView$setLocalImageSource$1(int i5, int i6, LocalImageThumbnailView localImageThumbnailView, Uri uri, Continuation continuation) {
        super(2, continuation);
        this.$widthDp = i5;
        this.$heightDp = i6;
        this.this$0 = localImageThumbnailView;
        this.$uri = uri;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new LocalImageThumbnailView$setLocalImageSource$1(this.$widthDp, this.$heightDp, this.this$0, this.$uri, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        SimpleDraweeView simpleDraweeView;
        ImageView imageView;
        SimpleDraweeView simpleDraweeView2;
        a aVar = a.f13464d;
        int i5 = this.label;
        try {
            if (i5 == 0) {
                b.R(obj);
                int dpToPx = SizeUtilsKt.getDpToPx(this.$widthDp);
                int dpToPx2 = SizeUtilsKt.getDpToPx(this.$heightDp);
                Size size = (dpToPx == 0 || dpToPx2 == 0) ? new Size(h0.DEFAULT_DRAG_ANIMATION_DURATION, h0.DEFAULT_DRAG_ANIMATION_DURATION) : new Size(dpToPx, dpToPx2);
                ThumbnailLoader thumbnailLoader = ThumbnailLoader.INSTANCE;
                Context context = this.this$0.getContext();
                Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
                Uri uri = this.$uri;
                this.label = 1;
                obj = thumbnailLoader.loadThumbnail(context, uri, size, this);
                if (obj == aVar) {
                    return aVar;
                }
            } else {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                b.R(obj);
            }
            Bitmap bitmap = (Bitmap) obj;
            boolean z5 = (bitmap != null ? bitmap.getAllocationByteCount() : 0) == 0;
            this.this$0.toggleImages(z5);
            if (z5) {
                LocalImageThumbnailView localImageThumbnailView = this.this$0;
                simpleDraweeView2 = localImageThumbnailView.simpleDraweeView;
                localImageThumbnailView.loadDefaultBitmap(simpleDraweeView2, this.$uri);
            } else {
                imageView = this.this$0.imageView;
                imageView.setImageBitmap(bitmap);
            }
        } catch (Exception e9) {
            CrashReporting.addBreadcrumb$default(CrashReporting.INSTANCE, "DCDLocalImageThumbnail - Failed to load thumbnail", v0.g(new Pair("exception", e9.toString()), new Pair("url", this.$uri.toString())), null, null, false, 28, null);
            this.this$0.toggleImages(true);
            LocalImageThumbnailView localImageThumbnailView2 = this.this$0;
            simpleDraweeView = localImageThumbnailView2.simpleDraweeView;
            localImageThumbnailView2.loadDefaultBitmap(simpleDraweeView, this.$uri);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((LocalImageThumbnailView$setLocalImageSource$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
