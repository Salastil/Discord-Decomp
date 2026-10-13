package com.discord.deep_link;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import com.appsflyer.deeplink.DeepLink;
import com.appsflyer.deeplink.DeepLinkListener;
import com.appsflyer.deeplink.DeepLinkResult;
import com.discord.crash_reporting.CrashReporting;
import com.discord.misc.utilities.activity.ActivityUtilities;
import java.util.function.Function;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;

@Metadata(d1 = {"\u0000\u0017\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H\u0016¨\u0006\u0006"}, d2 = {"com/discord/deep_link/DeepLinks$init$2", "Lcom/appsflyer/deeplink/DeepLinkListener;", "onDeepLinking", "", "deepLinkResult", "Lcom/appsflyer/deeplink/DeepLinkResult;", "deep_link_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nDeepLinks.kt\nKotlin\n*S Kotlin\n*F\n+ 1 DeepLinks.kt\ncom/discord/deep_link/DeepLinks$init$2\n+ 2 Uri.kt\nandroidx/core/net/UriKt\n*L\n1#1,137:1\n29#2:138\n29#2:139\n*S KotlinDebug\n*F\n+ 1 DeepLinks.kt\ncom/discord/deep_link/DeepLinks$init$2\n*L\n106#1:138\n118#1:139\n*E\n"})
/* loaded from: classes.dex */
public final class DeepLinks$init$2 implements DeepLinkListener {
    final /* synthetic */ Context $context;

    public DeepLinks$init$2(Context context) {
        this.$context = context;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onDeepLinking$lambda$1(Throwable th2) {
        CrashReporting crashReporting = CrashReporting.INSTANCE;
        Intrinsics.checkNotNull(th2);
        CrashReporting.captureException$default(crashReporting, th2, false, 2, null);
        return Unit.a;
    }

    @Override // com.appsflyer.deeplink.DeepLinkListener
    public void onDeepLinking(DeepLinkResult deepLinkResult) {
        DeepLink deepLink;
        boolean z5;
        boolean z6;
        String deepLinkDestinationWithAppsFlyerParam;
        Pair pair;
        Intrinsics.checkNotNullParameter(deepLinkResult, "deepLinkResult");
        if (deepLinkResult.getStatus() == DeepLinkResult.Status.FOUND && (deepLink = deepLinkResult.getDeepLink()) != null) {
            String deepLinkValue = deepLink.getDeepLinkValue();
            if (deepLinkValue != null) {
                z5 = Intrinsics.areEqual(deepLink.isDeferred(), Boolean.TRUE);
                z6 = true;
            } else {
                String stringValue = deepLink.getStringValue("link");
                if (stringValue == null) {
                    stringValue = null;
                }
                deepLinkValue = stringValue != null ? stringValue : null;
                z5 = false;
                z6 = false;
            }
            if (deepLinkValue != null && Uri.parse(deepLinkValue).getQueryParameter(DeepLinksKt.FROM_APPSFLYER_PARAM) == null) {
                deepLinkDestinationWithAppsFlyerParam = DeepLinks.INSTANCE.getDeepLinkDestinationWithAppsFlyerParam(deepLinkValue, z6);
                pair = DeepLinks.initialUrl;
                if (pair == null) {
                    DeepLinks.initialUrl = new Pair(deepLinkDestinationWithAppsFlyerParam, Boolean.valueOf(z5));
                }
                Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(deepLinkDestinationWithAppsFlyerParam));
                Context context = this.$context;
                intent.addFlags(268435456);
                intent.setPackage(context.getPackageName());
                ActivityUtilities.startActivityAsyncWithFuture$default(ActivityUtilities.INSTANCE, this.$context, intent, null, 4, null).exceptionally((Function) new a());
            }
        }
    }
}
