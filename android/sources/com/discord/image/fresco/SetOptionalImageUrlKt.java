package com.discord.image.fresco;

import android.net.Uri;
import com.facebook.drawee.controller.AbstractDraweeControllerBuilder;
import com.facebook.drawee.controller.ControllerListener;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.imagepipeline.request.ImageRequestBuilder;
import com.reactnativecommunity.clipboard.ClipboardModule;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;
import w8.a;

@Metadata(d1 = {"\u0000,\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\u001a]\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\b\u0010\u0003\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00062\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u00062\u0012\b\u0002\u0010\b\u001a\f\u0012\u0006\b\u0000\u0012\u00020\n\u0018\u00010\t2\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\f2\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\f¢\u0006\u0002\u0010\u000e¨\u0006\u000f"}, d2 = {"setOptionalImageUrl", "", "Lcom/facebook/drawee/view/SimpleDraweeView;", "imageUrl", "", "autoPlayAnimations", "", "srcIsAnimated", "controllerListener", "Lcom/facebook/drawee/controller/ControllerListener;", "", "resizeWidthPx", "", "resizeHeightPx", "(Lcom/facebook/drawee/view/SimpleDraweeView;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/facebook/drawee/controller/ControllerListener;Ljava/lang/Integer;Ljava/lang/Integer;)V", "fresco_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class SetOptionalImageUrlKt {
    public static final void setOptionalImageUrl(@NotNull SimpleDraweeView simpleDraweeView, String str, Boolean bool, Boolean bool2, ControllerListener controllerListener, Integer num, Integer num2) {
        String type;
        boolean z5;
        Uri.Builder buildUpon;
        String lastPathSegment;
        ImageRequestBuilder applyDiscordDiskCachePolicy;
        int intValue;
        int intValue2;
        Intrinsics.checkNotNullParameter(simpleDraweeView, "<this>");
        if (str == null || StringsKt.K(str)) {
            simpleDraweeView.setVisibility(8);
            return;
        }
        Uri uri = a.a;
        Uri parse = Uri.parse(str);
        if (parse == null) {
            return;
        }
        String lastPathSegment2 = parse.getLastPathSegment();
        ResizeOptions resizeOptions = null;
        if (Intrinsics.areEqual(parse.getScheme(), "content")) {
            try {
                type = simpleDraweeView.getContext().getContentResolver().getType(parse);
            } catch (Exception unused) {
            }
            boolean z6 = !Intrinsics.areEqual(type, "image/gif") || (lastPathSegment2 != null && x.h(lastPathSegment2, ".gif", true));
            boolean z7 = !Intrinsics.areEqual(bool2, Boolean.TRUE) && ((!Intrinsics.areEqual(type, ClipboardModule.MIMETYPE_WEBP) || (lastPathSegment2 != null && x.h(lastPathSegment2, ".webp", true))) || (!Intrinsics.areEqual(type, "image/avif") || (lastPathSegment2 != null && x.h(lastPathSegment2, ".avif", true))));
            z5 = (!z6 || z7) && !Intrinsics.areEqual(bool, Boolean.FALSE);
            buildUpon = parse.buildUpon();
            lastPathSegment = parse.getLastPathSegment();
            if (lastPathSegment != null && x.h(lastPathSegment, ".avif", true)) {
                buildUpon.appendQueryParameter("format", "webp");
            }
            if (z5 && z7) {
                buildUpon.appendQueryParameter("animated", "true");
            }
            Uri build = buildUpon.build();
            ImageRequestBuilder d6 = ImageRequestBuilder.d(build);
            Intrinsics.checkNotNullExpressionValue(d6, "newBuilderWithSource(...)");
            Intrinsics.checkNotNull(build);
            applyDiscordDiskCachePolicy = DiskCachePolicyKt.applyDiscordDiskCachePolicy(d6, build);
            if (num != null && num.intValue() > 0 && num2 != null && num2.intValue() > 0) {
                intValue = num.intValue();
                intValue2 = num2.intValue();
                if (intValue > 0 && intValue2 > 0) {
                    resizeOptions = new ResizeOptions(intValue, intValue2);
                }
                applyDiscordDiskCachePolicy.f4858d = resizeOptions;
            }
            ImageRequest a = applyDiscordDiskCachePolicy.a();
            AbstractDraweeControllerBuilder controllerBuilder = simpleDraweeView.getControllerBuilder();
            controllerBuilder.f4418e = z5;
            controllerBuilder.f4417d = controllerListener;
            controllerBuilder.f4415b = a;
            controllerBuilder.f4420g = simpleDraweeView.getController();
            simpleDraweeView.setController(controllerBuilder.a());
            simpleDraweeView.setVisibility(0);
        }
        type = null;
        if (Intrinsics.areEqual(type, "image/gif")) {
        }
        if (Intrinsics.areEqual(bool2, Boolean.TRUE)) {
        }
        if (z6) {
        }
        buildUpon = parse.buildUpon();
        lastPathSegment = parse.getLastPathSegment();
        if (lastPathSegment != null) {
            buildUpon.appendQueryParameter("format", "webp");
        }
        if (z5) {
            buildUpon.appendQueryParameter("animated", "true");
        }
        Uri build2 = buildUpon.build();
        ImageRequestBuilder d62 = ImageRequestBuilder.d(build2);
        Intrinsics.checkNotNullExpressionValue(d62, "newBuilderWithSource(...)");
        Intrinsics.checkNotNull(build2);
        applyDiscordDiskCachePolicy = DiskCachePolicyKt.applyDiscordDiskCachePolicy(d62, build2);
        if (num != null) {
            intValue = num.intValue();
            intValue2 = num2.intValue();
            if (intValue > 0) {
                resizeOptions = new ResizeOptions(intValue, intValue2);
            }
            applyDiscordDiskCachePolicy.f4858d = resizeOptions;
        }
        ImageRequest a10 = applyDiscordDiskCachePolicy.a();
        AbstractDraweeControllerBuilder controllerBuilder2 = simpleDraweeView.getControllerBuilder();
        controllerBuilder2.f4418e = z5;
        controllerBuilder2.f4417d = controllerListener;
        controllerBuilder2.f4415b = a10;
        controllerBuilder2.f4420g = simpleDraweeView.getController();
        simpleDraweeView.setController(controllerBuilder2.a());
        simpleDraweeView.setVisibility(0);
    }

    public static /* synthetic */ void setOptionalImageUrl$default(SimpleDraweeView simpleDraweeView, String str, Boolean bool, Boolean bool2, ControllerListener controllerListener, Integer num, Integer num2, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            bool = null;
        }
        if ((i5 & 4) != 0) {
            bool2 = Boolean.FALSE;
        }
        if ((i5 & 8) != 0) {
            controllerListener = null;
        }
        if ((i5 & 16) != 0) {
            num = null;
        }
        if ((i5 & 32) != 0) {
            num2 = null;
        }
        setOptionalImageUrl(simpleDraweeView, str, bool, bool2, controllerListener, num, num2);
    }
}
