package com.discord.cache;

import a3.e;
import android.content.Context;
import android.content.SharedPreferences;
import com.discord.app_database.AppDatabase;
import com.discord.chat.presentation.message.view.voicemessages.f;
import com.discord.tti_manager.TTIMetrics;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.bridge.WritableNativeMap;
import com.facebook.react.uimanager.ViewProps;
import fo.l;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import jb.a;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.u0;
import kotlin.collections.x;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\f\u0018\u0000 %2\u00020\u0001:\u0001%B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000e\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0015J\u0010\u0010\u0016\u001a\u0004\u0018\u00010\u00172\u0006\u0010\u0018\u001a\u00020\u0017J\u0016\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u0018\u001a\u00020\u00172\u0006\u0010\u001b\u001a\u00020\u0017J\u000e\u0010\u001c\u001a\u00020\u001a2\u0006\u0010\u0018\u001a\u00020\u0017J\u0006\u0010\u001d\u001a\u00020\u001aJ\u0012\u0010\u001e\u001a\u0004\u0018\u00010\u00172\b\b\u0002\u0010\u001f\u001a\u00020\u0007J\u0006\u0010 \u001a\u00020\u0007J\u000e\u0010!\u001a\u00020\u001a2\u0006\u0010\"\u001a\u00020\u0007J\u0006\u0010#\u001a\u00020\u0007J\u000e\u0010$\u001a\u00020\u001a2\u0006\u0010\"\u001a\u00020\u0007R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R#\u0010\b\u001a\n \n*\u0004\u0018\u00010\t0\t8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\r\u0010\u000e\u001a\u0004\b\u000b\u0010\fR#\u0010\u000f\u001a\n \n*\u0004\u0018\u00010\t0\t8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u0011\u0010\u000e\u001a\u0004\b\u0010\u0010\f¨\u0006&"}, d2 = {"Lcom/discord/cache/Cache;", "", "reactContext", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "sharedPrefsLoaded", "", "sharedPrefs", "Landroid/content/SharedPreferences;", "kotlin.jvm.PlatformType", "getSharedPrefs", "()Landroid/content/SharedPreferences;", "sharedPrefs$delegate", "Lkotlin/Lazy;", "fastCacheSharedPrefs", "getFastCacheSharedPrefs", "fastCacheSharedPrefs$delegate", "refresh", "Lcom/facebook/react/bridge/WritableMap;", "exclude", "Lcom/facebook/react/bridge/ReadableArray;", "getItem", "", "key", "setItem", "", "value", "removeItem", "clear", "getToken", "sanitized", "getUseChannelObfuscation", "setUseChannelObfuscation", ViewProps.ENABLED, "getUseAltGateway", "setUseAltGateway", "Companion", "cache_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nCache.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Cache.kt\ncom/discord/cache/Cache\n+ 2 _Maps.kt\nkotlin/collections/MapsKt___MapsKt\n+ 3 SharedPreferences.kt\nandroidx/core/content/SharedPreferencesKt\n+ 4 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,164:1\n216#2,2:165\n40#3,7:167\n47#3,6:176\n40#3,13:182\n40#3,13:195\n40#3,13:208\n40#3,13:221\n40#3,13:234\n40#3,13:247\n1869#4,2:174\n*S KotlinDebug\n*F\n+ 1 Cache.kt\ncom/discord/cache/Cache\n*L\n56#1:165,2\n71#1:167,7\n71#1:176,6\n88#1:182,13\n93#1:195,13\n100#1:208,13\n105#1:221,13\n112#1:234,13\n115#1:247,13\n73#1:174,2\n*E\n"})
/* loaded from: classes.dex */
public final class Cache {

    @NotNull
    private static final String CACHE_STORE_NAME = "CacheStore";

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final HashSet<String> FAST_CACHE_KEYS;
    private static final int FAST_CACHE_VERSION = 2;
    private static Cache cacheInstance;

    /* renamed from: fastCacheSharedPrefs$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy fastCacheSharedPrefs;

    /* renamed from: sharedPrefs$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy sharedPrefs;
    private boolean sharedPrefsLoaded;

    @Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\r\u001a\u00020\fJ\u000e\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0011R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000R\u001e\u0010\b\u001a\u0012\u0012\u0004\u0012\u00020\u00050\tj\b\u0012\u0004\u0012\u00020\u0005`\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\fX\u0082.¢\u0006\u0002\n\u0000¨\u0006\u0012"}, d2 = {"Lcom/discord/cache/Cache$Companion;", "", "<init>", "()V", "CACHE_STORE_NAME", "", "FAST_CACHE_VERSION", "", "FAST_CACHE_KEYS", "Ljava/util/HashSet;", "Lkotlin/collections/HashSet;", "cacheInstance", "Lcom/discord/cache/Cache;", "get", "quickInitCache", "", "applicationContext", "Landroid/content/Context;", "cache_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final Cache get() {
            Cache cache = Cache.cacheInstance;
            if (cache != null) {
                return cache;
            }
            Intrinsics.throwUninitializedPropertyAccessException("cacheInstance");
            return null;
        }

        public final void quickInitCache(@NotNull Context applicationContext) {
            Intrinsics.checkNotNullParameter(applicationContext, "applicationContext");
            Cache.cacheInstance = new Cache(applicationContext);
        }

        private Companion() {
        }
    }

    static {
        String[] elements = {"_clientStateKey", "_userIdKey", AppDatabase.LAST_DATABASE_USER_ID_PREFERENCES_KEY, "token", "_useZstd", "_useChannelObfuscation", "_useAltGateway", "analytics_installation", "_derivedQosData"};
        Intrinsics.checkNotNullParameter(elements, "elements");
        HashSet<String> hashSet = new HashSet<>(u0.a(9));
        x.F(elements, hashSet);
        FAST_CACHE_KEYS = hashSet;
    }

    public Cache(@NotNull Context reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.sharedPrefs = l.a(new f(reactContext, 4));
        this.fastCacheSharedPrefs = l.a(new f(reactContext, 5));
        a.M(null, 0, new h8.a(3, this), 31);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit _init_$lambda$2(Cache cache) {
        TTIMetrics tTIMetrics = TTIMetrics.INSTANCE;
        TTIMetrics.record$default(tTIMetrics, "CacheStorage Init Start", 0L, null, false, 14, null);
        cache.getSharedPrefs().getString("hydrate", null);
        cache.sharedPrefsLoaded = true;
        TTIMetrics.record$default(tTIMetrics, "CacheStorage Init End", 0L, null, false, 14, null);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final SharedPreferences fastCacheSharedPrefs_delegate$lambda$1(Context context) {
        return context.getSharedPreferences("FastCacheStore", 0);
    }

    private final SharedPreferences getFastCacheSharedPrefs() {
        return (SharedPreferences) this.fastCacheSharedPrefs.getValue();
    }

    private final SharedPreferences getSharedPrefs() {
        return (SharedPreferences) this.sharedPrefs.getValue();
    }

    public static /* synthetic */ String getToken$default(Cache cache, boolean z5, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            z5 = true;
        }
        return cache.getToken(z5);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final SharedPreferences sharedPrefs_delegate$lambda$0(Context context) {
        return context.getSharedPreferences(CACHE_STORE_NAME, 0);
    }

    public final void clear() {
        SharedPreferences sharedPrefs = getSharedPrefs();
        Intrinsics.checkNotNullExpressionValue(sharedPrefs, "<get-sharedPrefs>(...)");
        SharedPreferences.Editor edit = sharedPrefs.edit();
        edit.clear();
        edit.apply();
        SharedPreferences fastCacheSharedPrefs = getFastCacheSharedPrefs();
        Intrinsics.checkNotNullExpressionValue(fastCacheSharedPrefs, "<get-fastCacheSharedPrefs>(...)");
        SharedPreferences.Editor edit2 = fastCacheSharedPrefs.edit();
        edit2.clear();
        edit2.apply();
    }

    public final String getItem(@NotNull String key) {
        Intrinsics.checkNotNullParameter(key, "key");
        HashSet<String> hashSet = FAST_CACHE_KEYS;
        if (!hashSet.contains(key)) {
            if (!this.sharedPrefsLoaded) {
                TTIMetrics.record$default(TTIMetrics.INSTANCE, e.k("WARNING: Cache accessed before parsed ", key), 0L, null, false, 14, null);
            }
            return getSharedPrefs().getString(key, null);
        }
        if (getFastCacheSharedPrefs().getInt("cache_version", 0) < 2) {
            SharedPreferences fastCacheSharedPrefs = getFastCacheSharedPrefs();
            Intrinsics.checkNotNullExpressionValue(fastCacheSharedPrefs, "<get-fastCacheSharedPrefs>(...)");
            SharedPreferences.Editor edit = fastCacheSharedPrefs.edit();
            edit.putInt("cache_version", 2);
            for (String str : hashSet) {
                edit.putString(str, getSharedPrefs().getString(str, null));
            }
            edit.apply();
        }
        return getFastCacheSharedPrefs().getString(key, null);
    }

    public final String getToken(boolean sanitized) {
        if (!sanitized) {
            return getItem("token");
        }
        String item = getItem("token");
        if (item != null) {
            return StringsKt.P(item);
        }
        return null;
    }

    public final boolean getUseAltGateway() {
        String item = getItem("_useAltGateway");
        if (item != null) {
            return Boolean.parseBoolean(item);
        }
        return false;
    }

    public final boolean getUseChannelObfuscation() {
        String item = getItem("_useChannelObfuscation");
        if (item != null) {
            return Boolean.parseBoolean(item);
        }
        return false;
    }

    @NotNull
    public final WritableMap refresh(@NotNull ReadableArray exclude) {
        Intrinsics.checkNotNullParameter(exclude, "exclude");
        TTIMetrics.record$default(TTIMetrics.INSTANCE, "Storage.refresh() Start", 0L, null, false, 14, null);
        try {
            WritableNativeMap writableNativeMap = new WritableNativeMap();
            Set l02 = CollectionsKt.l0(exclude.toArrayList());
            Map<String, ?> all = getSharedPrefs().getAll();
            Intrinsics.checkNotNullExpressionValue(all, "getAll(...)");
            for (Map.Entry<String, ?> entry : all.entrySet()) {
                String key = entry.getKey();
                Object value = entry.getValue();
                if (!l02.contains(key)) {
                    Intrinsics.checkNotNull(key);
                    Intrinsics.checkNotNull(value, "null cannot be cast to non-null type kotlin.String");
                    writableNativeMap.putString(key, (String) value);
                }
            }
            return writableNativeMap;
        } finally {
            TTIMetrics.record$default(TTIMetrics.INSTANCE, "Storage.refresh() End", 0L, null, false, 14, null);
        }
    }

    public final void removeItem(@NotNull String key) {
        Intrinsics.checkNotNullParameter(key, "key");
        SharedPreferences sharedPrefs = getSharedPrefs();
        Intrinsics.checkNotNullExpressionValue(sharedPrefs, "<get-sharedPrefs>(...)");
        SharedPreferences.Editor edit = sharedPrefs.edit();
        edit.remove(key);
        edit.apply();
        if (FAST_CACHE_KEYS.contains(key)) {
            SharedPreferences fastCacheSharedPrefs = getFastCacheSharedPrefs();
            Intrinsics.checkNotNullExpressionValue(fastCacheSharedPrefs, "<get-fastCacheSharedPrefs>(...)");
            SharedPreferences.Editor edit2 = fastCacheSharedPrefs.edit();
            edit2.remove(key);
            edit2.apply();
        }
    }

    public final void setItem(@NotNull String key, @NotNull String value) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(value, "value");
        SharedPreferences sharedPrefs = getSharedPrefs();
        Intrinsics.checkNotNullExpressionValue(sharedPrefs, "<get-sharedPrefs>(...)");
        SharedPreferences.Editor edit = sharedPrefs.edit();
        edit.putString(key, value);
        edit.apply();
        if (FAST_CACHE_KEYS.contains(key)) {
            SharedPreferences fastCacheSharedPrefs = getFastCacheSharedPrefs();
            Intrinsics.checkNotNullExpressionValue(fastCacheSharedPrefs, "<get-fastCacheSharedPrefs>(...)");
            SharedPreferences.Editor edit2 = fastCacheSharedPrefs.edit();
            edit2.putString(key, value);
            edit2.apply();
        }
    }

    public final void setUseAltGateway(boolean enabled) {
        setItem("_useAltGateway", String.valueOf(enabled));
    }

    public final void setUseChannelObfuscation(boolean enabled) {
        setItem("_useChannelObfuscation", String.valueOf(enabled));
    }
}
