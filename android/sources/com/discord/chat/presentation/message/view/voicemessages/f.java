package com.discord.chat.presentation.message.view.voicemessages;

import android.content.Context;
import android.content.SharedPreferences;
import android.graphics.drawable.Drawable;
import android.view.animation.Animation;
import com.discord.app_database.AppDatabase;
import com.discord.cache.Cache;
import com.discord.image.fresco.FrescoModuleDiscord;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class f implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4062d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Context f4063e;

    public /* synthetic */ f(Context context, int i5) {
        this.f4062d = i5;
        this.f4063e = context;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Animation bounceAnimator_delegate$lambda$2;
        Drawable buttonContainerDefaultDrawable_delegate$lambda$0;
        Unit startFrescoInitializationAsync$lambda$1;
        Unit initializeAppDatabase$lambda$0;
        SharedPreferences sharedPrefs_delegate$lambda$0;
        SharedPreferences fastCacheSharedPrefs_delegate$lambda$1;
        switch (this.f4062d) {
            case 0:
                bounceAnimator_delegate$lambda$2 = AudioPlayerView.bounceAnimator_delegate$lambda$2(this.f4063e);
                return bounceAnimator_delegate$lambda$2;
            case 1:
                buttonContainerDefaultDrawable_delegate$lambda$0 = AudioPlayerWipeAnimatorManager.buttonContainerDefaultDrawable_delegate$lambda$0(this.f4063e);
                return buttonContainerDefaultDrawable_delegate$lambda$0;
            case 2:
                startFrescoInitializationAsync$lambda$1 = FrescoModuleDiscord.Companion.startFrescoInitializationAsync$lambda$1(this.f4063e);
                return startFrescoInitializationAsync$lambda$1;
            case 3:
                initializeAppDatabase$lambda$0 = AppDatabase.initializeAppDatabase$lambda$0(this.f4063e);
                return initializeAppDatabase$lambda$0;
            case 4:
                sharedPrefs_delegate$lambda$0 = Cache.sharedPrefs_delegate$lambda$0(this.f4063e);
                return sharedPrefs_delegate$lambda$0;
            default:
                fastCacheSharedPrefs_delegate$lambda$1 = Cache.fastCacheSharedPrefs_delegate$lambda$1(this.f4063e);
                return fastCacheSharedPrefs_delegate$lambda$1;
        }
    }
}
