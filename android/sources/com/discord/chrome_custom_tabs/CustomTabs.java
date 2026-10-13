package com.discord.chrome_custom_tabs;

import android.app.ActivityOptions;
import android.content.ActivityNotFoundException;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import e4.l;
import k2.r;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0004\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0015\u0010\u0007\u001a\u00020\u00062\u0006\u0010\u0005\u001a\u00020\u0004¢\u0006\u0004\b\u0007\u0010\bJy\u0010\u0017\u001a\u00020\u00152\u0006\u0010\u0005\u001a\u00020\u00042\u0006\u0010\n\u001a\u00020\t2\b\b\u0002\u0010\u000b\u001a\u00020\u00062\b\b\u0001\u0010\r\u001a\u00020\f2\n\b\u0003\u0010\u000e\u001a\u0004\u0018\u00010\f2\n\b\u0003\u0010\u000f\u001a\u0004\u0018\u00010\f2\n\b\u0003\u0010\u0010\u001a\u0004\u0018\u00010\f2\n\b\u0003\u0010\u0011\u001a\u0004\u0018\u00010\f2\u0016\u0010\u0016\u001a\u0012\u0012\b\u0012\u00060\u0013j\u0002`\u0014\u0012\u0004\u0012\u00020\u00150\u0012¢\u0006\u0004\b\u0017\u0010\u0018¨\u0006\u0019"}, d2 = {"Lcom/discord/chrome_custom_tabs/CustomTabs;", "", "<init>", "()V", "Landroid/content/Context;", "context", "", "supportsCustomTabs", "(Landroid/content/Context;)Z", "Landroid/net/Uri;", "uri", "showTitle", "", "toolbarColor", "animShowEnterResId", "animShowExitResId", "animHideEnterResId", "animHideExitResId", "Lkotlin/Function1;", "Ljava/lang/Exception;", "Lkotlin/Exception;", "", "onFailure", "openUrlWithCustomTabs", "(Landroid/content/Context;Landroid/net/Uri;ZILjava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Lkotlin/jvm/functions/Function1;)V", "chrome_custom_tabs_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class CustomTabs {

    @NotNull
    public static final CustomTabs INSTANCE = new CustomTabs();

    private CustomTabs() {
    }

    public static /* synthetic */ void openUrlWithCustomTabs$default(CustomTabs customTabs, Context context, Uri uri, boolean z5, int i5, Integer num, Integer num2, Integer num3, Integer num4, Function1 function1, int i6, Object obj) {
        Integer num5;
        CustomTabs customTabs2;
        Context context2;
        Uri uri2;
        int i10;
        Function1 function12;
        if ((i6 & 4) != 0) {
            z5 = false;
        }
        boolean z6 = z5;
        Integer num6 = (i6 & 16) != 0 ? null : num;
        Integer num7 = (i6 & 32) != 0 ? null : num2;
        Integer num8 = (i6 & 64) != 0 ? null : num3;
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            num5 = null;
            customTabs2 = customTabs;
            uri2 = uri;
            i10 = i5;
            function12 = function1;
            context2 = context;
        } else {
            num5 = num4;
            customTabs2 = customTabs;
            context2 = context;
            uri2 = uri;
            i10 = i5;
            function12 = function1;
        }
        customTabs2.openUrlWithCustomTabs(context2, uri2, z6, i10, num6, num7, num8, num5, function12);
    }

    public final void openUrlWithCustomTabs(@NotNull Context context, @NotNull Uri uri, boolean showTitle, int toolbarColor, Integer animShowEnterResId, Integer animShowExitResId, Integer animHideEnterResId, Integer animHideExitResId, @NotNull Function1<? super Exception, Unit> onFailure) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(onFailure, "onFailure");
        if (!supportsCustomTabs(context)) {
            onFailure.invoke(new IllegalStateException("Unable to find custom tabs package."));
            return;
        }
        int i5 = (-16777216) | toolbarColor;
        r rVar = new r(Integer.valueOf(i5), Integer.valueOf(toolbarColor), Integer.valueOf(i5), 12);
        Intrinsics.checkNotNullExpressionValue(rVar, "build(...)");
        s9.a aVar = new s9.a();
        Intent intent = (Intent) aVar.f17827b;
        aVar.f17830e = rVar.M();
        intent.putExtra("android.support.customtabs.extra.TITLE_VISIBILITY", showTitle ? 1 : 0);
        if (animShowEnterResId != null && animShowExitResId != null) {
            aVar.f17829d = ActivityOptions.makeCustomAnimation(context, animShowEnterResId.intValue(), animShowExitResId.intValue());
        }
        if (animHideEnterResId != null && animHideExitResId != null) {
            intent.putExtra("android.support.customtabs.extra.EXIT_ANIMATION_BUNDLE", ActivityOptions.makeCustomAnimation(context, animHideEnterResId.intValue(), animHideExitResId.intValue()).toBundle());
        }
        l j = aVar.j();
        Intent intent2 = (Intent) j.f7959e;
        Intrinsics.checkNotNullExpressionValue(j, "build(...)");
        try {
            intent2.setData(uri);
            intent2.setData(uri);
            context.startActivity(intent2, (Bundle) j.f7960i);
        } catch (ActivityNotFoundException e9) {
            onFailure.invoke(e9);
        }
    }

    public final boolean supportsCustomTabs(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return CustomTabsPackages.INSTANCE.getCustomTabsDefaultPackage(context) != null;
    }
}
