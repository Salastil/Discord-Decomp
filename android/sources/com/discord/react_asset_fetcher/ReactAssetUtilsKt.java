package com.discord.react_asset_fetcher;

import android.content.Context;
import android.graphics.drawable.ShapeDrawable;
import android.graphics.drawable.shapes.RectShape;
import android.webkit.URLUtil;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.react.views.imagehelper.ImageSource;
import com.google.android.material.button.MaterialButton;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000.\n\u0000\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\u001a\u0012\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u0001\u001a\u0016\u0010\u0004\u001a\u0004\u0018\u00010\u0001*\u00020\u00022\b\u0010\u0005\u001a\u0004\u0018\u00010\u0001\u001a\u0014\u0010\u0006\u001a\u00020\u0007*\u00020\b2\b\u0010\u0005\u001a\u0004\u0018\u00010\u0001\u001a\u0012\u0010\t\u001a\u00020\u0007*\u00020\b2\u0006\u0010\n\u001a\u00020\u000b\u001a\u0012\u0010\f\u001a\u00020\u0007*\u00020\b2\u0006\u0010\u0003\u001a\u00020\u0001\u001a\u001c\u0010\r\u001a\u00020\u0007*\u00020\u000e2\u0006\u0010\u0003\u001a\u00020\u00012\b\b\u0001\u0010\u000f\u001a\u00020\u0010¨\u0006\u0011"}, d2 = {"getReactImageUrl", "", "Landroid/content/Context;", "assetUrl", "inflateUrl", "url", "setOptionalReactImageUrl", "", "Lcom/facebook/drawee/view/SimpleDraweeView;", "setReactAsset", "asset", "Lcom/discord/react_asset_fetcher/ReactAsset;", "setReactImageUrl", "setReactIcon", "Lcom/google/android/material/button/MaterialButton;", "iconSize", "", "react_asset_fetcher_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ReactAssetUtilsKt {
    @NotNull
    public static final String getReactImageUrl(@NotNull Context context, @NotNull String assetUrl) {
        Intrinsics.checkNotNullParameter(context, "<this>");
        Intrinsics.checkNotNullParameter(assetUrl, "assetUrl");
        String uri = new ImageSource(context, assetUrl, 0.0d, 0.0d, null, false, 60, null).getUri().toString();
        Intrinsics.checkNotNullExpressionValue(uri, "toString(...)");
        return uri;
    }

    public static final String inflateUrl(@NotNull Context context, String str) {
        Intrinsics.checkNotNullParameter(context, "<this>");
        if (str == null) {
            return null;
        }
        return URLUtil.isNetworkUrl(str) ? str : getReactImageUrl(context, str);
    }

    public static final void setOptionalReactImageUrl(@NotNull SimpleDraweeView simpleDraweeView, String str) {
        Intrinsics.checkNotNullParameter(simpleDraweeView, "<this>");
        if (str == null || StringsKt.K(str)) {
            simpleDraweeView.setVisibility(8);
            simpleDraweeView.setImageURI((String) null);
        } else {
            simpleDraweeView.setVisibility(0);
            setReactImageUrl(simpleDraweeView, str);
        }
    }

    public static final void setReactAsset(@NotNull SimpleDraweeView simpleDraweeView, @NotNull ReactAsset asset) {
        Intrinsics.checkNotNullParameter(simpleDraweeView, "<this>");
        Intrinsics.checkNotNullParameter(asset, "asset");
        Context context = simpleDraweeView.getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        setReactImageUrl(simpleDraweeView, ReactAssetExtensionsKt.getUri(asset, context));
    }

    public static final void setReactIcon(@NotNull MaterialButton materialButton, @NotNull String assetUrl, int i5) {
        Intrinsics.checkNotNullParameter(materialButton, "<this>");
        Intrinsics.checkNotNullParameter(assetUrl, "assetUrl");
        materialButton.setIconSize(i5);
        ShapeDrawable shapeDrawable = new ShapeDrawable(new RectShape());
        shapeDrawable.getPaint().setColor(0);
        materialButton.setIcon(shapeDrawable);
        x.t(CoroutineViewUtilsKt.getAttachedScope(materialButton), null, new ReactAssetUtilsKt$setReactIcon$2(materialButton, assetUrl, null), 3);
    }

    public static final void setReactImageUrl(@NotNull SimpleDraweeView simpleDraweeView, @NotNull String assetUrl) {
        Intrinsics.checkNotNullParameter(simpleDraweeView, "<this>");
        Intrinsics.checkNotNullParameter(assetUrl, "assetUrl");
        Context context = simpleDraweeView.getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        simpleDraweeView.setImageURI(getReactImageUrl(context, assetUrl));
    }
}
