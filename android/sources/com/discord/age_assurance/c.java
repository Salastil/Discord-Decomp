package com.discord.age_assurance;

import android.graphics.Bitmap;
import com.discord.appreview.AppRatingRequestModule;
import com.discord.browser_manager.BrowserManagerModule;
import com.discord.image.dominant_color.ImageManagerModule;
import com.discord.intents.LinkingModule;
import com.discord.jank_stats.JankSessionModule;
import com.discord.on_demand_resource.OnDemandResourceModule;
import com.facebook.react.bridge.Promise;
import com.google.android.play.agesignals.AgeSignalsResult;
import com.google.android.play.core.integrity.StandardIntegrityManager;
import java.util.List;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3739d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Promise f3740e;

    public /* synthetic */ c(Promise promise, int i5) {
        this.f3739d = i5;
        this.f3740e = promise;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit retrieveAgeSignals$lambda$3;
        Unit requestWithProvider$lambda$6;
        Unit prepareIntegrityToken$lambda$0;
        Unit prepareIntegrityToken$lambda$1;
        Unit requestWithProvider$lambda$5$lambda$2;
        Unit requestRating$lambda$1;
        Unit openTrackedCustomTab$lambda$4$lambda$2;
        Unit openInChromeURL$lambda$0;
        Unit openInAppURL$lambda$1;
        Unit pendingReports$lambda$2;
        Unit fetchOnDemandResource$lambda$1$lambda$0;
        Unit dominantColors$lambda$2;
        Unit avatarBase64$lambda$0;
        Unit tryOpenUrlAsUniversalLink$lambda$1;
        Unit tryOpenScheme$lambda$5;
        switch (this.f3739d) {
            case 0:
                retrieveAgeSignals$lambda$3 = PlayAgeSignalsModule.retrieveAgeSignals$lambda$3(this.f3740e, (AgeSignalsResult) obj);
                return retrieveAgeSignals$lambda$3;
            case 1:
                requestWithProvider$lambda$6 = PlayIntegrityModule.requestWithProvider$lambda$6(this.f3740e, (Exception) obj);
                return requestWithProvider$lambda$6;
            case 2:
                prepareIntegrityToken$lambda$0 = PlayIntegrityModule.prepareIntegrityToken$lambda$0(this.f3740e, (StandardIntegrityManager.StandardIntegrityTokenProvider) obj);
                return prepareIntegrityToken$lambda$0;
            case 3:
                prepareIntegrityToken$lambda$1 = PlayIntegrityModule.prepareIntegrityToken$lambda$1(this.f3740e, (Exception) obj);
                return prepareIntegrityToken$lambda$1;
            case 4:
                requestWithProvider$lambda$5$lambda$2 = PlayIntegrityModule.requestWithProvider$lambda$5$lambda$2(this.f3740e, (StandardIntegrityManager.StandardIntegrityToken) obj);
                return requestWithProvider$lambda$5$lambda$2;
            case 5:
                requestRating$lambda$1 = AppRatingRequestModule.requestRating$lambda$1(this.f3740e, (Exception) obj);
                return requestRating$lambda$1;
            case 6:
                openTrackedCustomTab$lambda$4$lambda$2 = BrowserManagerModule.openTrackedCustomTab$lambda$4$lambda$2(this.f3740e, ((Boolean) obj).booleanValue());
                return openTrackedCustomTab$lambda$4$lambda$2;
            case 7:
                openInChromeURL$lambda$0 = BrowserManagerModule.openInChromeURL$lambda$0(this.f3740e, (Exception) obj);
                return openInChromeURL$lambda$0;
            case 8:
                openInAppURL$lambda$1 = BrowserManagerModule.openInAppURL$lambda$1(this.f3740e, (Exception) obj);
                return openInAppURL$lambda$1;
            case 9:
                pendingReports$lambda$2 = JankSessionModule.getPendingReports$lambda$2(this.f3740e, (List) obj);
                return pendingReports$lambda$2;
            case 10:
                fetchOnDemandResource$lambda$1$lambda$0 = OnDemandResourceModule.fetchOnDemandResource$lambda$1$lambda$0(this.f3740e, ((Boolean) obj).booleanValue());
                return fetchOnDemandResource$lambda$1$lambda$0;
            case 11:
                dominantColors$lambda$2 = ImageManagerModule.getDominantColors$lambda$2(this.f3740e, (Bitmap) obj);
                return dominantColors$lambda$2;
            case 12:
                avatarBase64$lambda$0 = ImageManagerModule.getAvatarBase64$lambda$0(this.f3740e, (Bitmap) obj);
                return avatarBase64$lambda$0;
            case 13:
                tryOpenUrlAsUniversalLink$lambda$1 = LinkingModule.tryOpenUrlAsUniversalLink$lambda$1(this.f3740e, (Unit) obj);
                return tryOpenUrlAsUniversalLink$lambda$1;
            default:
                tryOpenScheme$lambda$5 = LinkingModule.tryOpenScheme$lambda$5(this.f3740e, (Unit) obj);
                return tryOpenScheme$lambda$5;
        }
    }
}
