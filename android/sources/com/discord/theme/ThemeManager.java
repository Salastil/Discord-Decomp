package com.discord.theme;

import android.app.Activity;
import android.content.Context;
import android.content.res.Resources;
import android.view.View;
import com.discord.theme.utils.ActivityThemeUtils;
import com.discord.theme.utils.UpdateSystemUiKt;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.ViewProps;
import fo.n;
import java.util.EnumMap;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000^\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0006\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0013\u001a\u00020\u00072\u0006\u0010\u0014\u001a\u00020\u0006H\u0002J\u0006\u0010\u0015\u001a\u00020\u0007J\u000e\u0010\u0015\u001a\u00020\u00072\u0006\u0010\u0014\u001a\u00020\u0006J\u0006\u0010\u0016\u001a\u00020\u0007J\u0006\u0010\u0017\u001a\u00020\rJ\u000e\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001bJ\u000e\u0010\u001c\u001a\u00020\u00192\u0006\u0010\u001d\u001a\u00020\u000bJ\u0006\u0010\u001e\u001a\u00020\u000bJ\b\u0010\u001f\u001a\u0004\u0018\u00010\u0006J\u0006\u0010 \u001a\u00020\u000bJ\u0006\u0010!\u001a\u00020\u000bJ\u0010\u0010\"\u001a\u00020\u00192\b\u0010\b\u001a\u0004\u0018\u00010\u0006J\u000e\u0010#\u001a\u00020\u00192\u0006\u0010$\u001a\u00020%J\u0006\u0010&\u001a\u00020\u000bJ\u0010\u0010'\u001a\u00020\u00192\u0006\u0010\b\u001a\u00020\u0006H\u0002J\u0006\u0010(\u001a\u00020\u0019J\u0006\u0010)\u001a\u00020\u0019J\u0006\u0010*\u001a\u00020\u0019J\u0006\u0010+\u001a\u00020\u0019J\u000e\u0010,\u001a\u00020\u00192\u0006\u0010-\u001a\u00020.J\u000e\u0010/\u001a\u00020\u00192\u0006\u00100\u001a\u000201J\u000e\u0010/\u001a\u00020\u00192\u0006\u0010-\u001a\u00020.J\u0016\u00102\u001a\u00020\u00192\u0006\u0010$\u001a\u00020%2\u0006\u0010\n\u001a\u00020\u000bJ\r\u00103\u001a\u00020\u000bH\u0000¢\u0006\u0002\b4R\u001a\u0010\u0004\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u00070\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0006X\u0082.¢\u0006\u0002\n\u0000R\u0010\u0010\t\u001a\u0004\u0018\u00010\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0010X\u0082.¢\u0006\u0002\n\u0000R\u0012\u0010\u0011\u001a\u00060\u0012R\u00020\u0010X\u0082.¢\u0006\u0002\n\u0000¨\u00065"}, d2 = {"Lcom/discord/theme/ThemeManager;", "", "<init>", "()V", "themes", "Ljava/util/EnumMap;", "Lcom/discord/theme/DiscordTheme;", "Lcom/discord/theme/DiscordThemeObject;", "theme", "themeOverride", "showSplashImage", "", "saturationFactor", "", "visualRefreshEnabled", "resources", "Landroid/content/res/Resources;", "resourceTheme", "Landroid/content/res/Resources$Theme;", "initThemeObject", "themeType", "getTheme", "getEffectiveTheme", "getSaturationFactor", "setSaturationFactor", "", "value", "", "setVisualRefreshEnabled", ViewProps.ENABLED, "isVisualRefreshEnabled", "getThemeOverride", "isThemeLight", "isThemeDark", "setThemeOverride", "init", "context", "Landroid/content/Context;", "isInitialized", "setTheme", "setLightTheme", "setDarkTheme", "setOnyxTheme", "setAshTheme", "disableSplashScreenExitAnimation", "activity", "Landroid/app/Activity;", "updateSystemUi", "view", "Landroid/view/View;", "updateWindowBackground", "shouldShowSplashImage", "shouldShowSplashImage$theme_release", "theme_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nThemeManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ThemeManager.kt\ncom/discord/theme/ThemeManager\n+ 2 Maps.kt\nkotlin/collections/MapsKt__MapsKt\n*L\n1#1,185:1\n384#2,7:186\n384#2,7:193\n384#2,7:200\n*S KotlinDebug\n*F\n+ 1 ThemeManager.kt\ncom/discord/theme/ThemeManager\n*L\n72#1:186,7\n82#1:193,7\n88#1:200,7\n*E\n"})
/* loaded from: classes3.dex */
public final class ThemeManager {
    private static Resources.Theme resourceTheme;
    private static Resources resources;
    private static DiscordTheme theme;
    private static DiscordTheme themeOverride;
    private static boolean visualRefreshEnabled;

    @NotNull
    public static final ThemeManager INSTANCE = new ThemeManager();

    @NotNull
    private static EnumMap<DiscordTheme, DiscordThemeObject> themes = new EnumMap<>(DiscordTheme.class);
    private static boolean showSplashImage = true;
    private static float saturationFactor = 1.0f;

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[DiscordTheme.values().length];
            try {
                iArr[DiscordTheme.ASH.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[DiscordTheme.LIGHT.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[DiscordTheme.DARK.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[DiscordTheme.ONYX.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    private ThemeManager() {
    }

    private final DiscordThemeObject initThemeObject(DiscordTheme themeType) {
        int i5 = WhenMappings.$EnumSwitchMapping$0[themeType.ordinal()];
        Resources.Theme theme2 = null;
        if (i5 == 1) {
            if (visualRefreshEnabled) {
                Resources resources2 = resources;
                if (resources2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("resources");
                    resources2 = null;
                }
                Resources.Theme theme3 = resourceTheme;
                if (theme3 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("resourceTheme");
                } else {
                    theme2 = theme3;
                }
                return new AshThemeExperiment(resources2, theme2);
            }
            Resources resources3 = resources;
            if (resources3 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("resources");
                resources3 = null;
            }
            Resources.Theme theme4 = resourceTheme;
            if (theme4 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("resourceTheme");
            } else {
                theme2 = theme4;
            }
            return new AshTheme(resources3, theme2);
        }
        if (i5 == 2) {
            if (visualRefreshEnabled) {
                Resources resources4 = resources;
                if (resources4 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("resources");
                    resources4 = null;
                }
                Resources.Theme theme5 = resourceTheme;
                if (theme5 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("resourceTheme");
                } else {
                    theme2 = theme5;
                }
                return new LightThemeExperiment(resources4, theme2);
            }
            Resources resources5 = resources;
            if (resources5 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("resources");
                resources5 = null;
            }
            Resources.Theme theme6 = resourceTheme;
            if (theme6 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("resourceTheme");
            } else {
                theme2 = theme6;
            }
            return new LightTheme(resources5, theme2);
        }
        if (i5 == 3) {
            if (visualRefreshEnabled) {
                Resources resources6 = resources;
                if (resources6 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("resources");
                    resources6 = null;
                }
                Resources.Theme theme7 = resourceTheme;
                if (theme7 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("resourceTheme");
                } else {
                    theme2 = theme7;
                }
                return new DarkThemeExperiment(resources6, theme2);
            }
            Resources resources7 = resources;
            if (resources7 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("resources");
                resources7 = null;
            }
            Resources.Theme theme8 = resourceTheme;
            if (theme8 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("resourceTheme");
            } else {
                theme2 = theme8;
            }
            return new DarkTheme(resources7, theme2);
        }
        if (i5 != 4) {
            throw new n();
        }
        if (visualRefreshEnabled) {
            Resources resources8 = resources;
            if (resources8 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("resources");
                resources8 = null;
            }
            Resources.Theme theme9 = resourceTheme;
            if (theme9 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("resourceTheme");
            } else {
                theme2 = theme9;
            }
            return new OnyxThemeExperiment(resources8, theme2);
        }
        Resources resources9 = resources;
        if (resources9 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("resources");
            resources9 = null;
        }
        Resources.Theme theme10 = resourceTheme;
        if (theme10 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("resourceTheme");
        } else {
            theme2 = theme10;
        }
        return new OnyxTheme(resources9, theme2);
    }

    private final void setTheme(DiscordTheme theme2) {
        theme = theme2;
    }

    public final void disableSplashScreenExitAnimation(@NotNull Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        ActivityThemeUtils.INSTANCE.disableSplashScreenExitAnimation$theme_release(activity);
    }

    @NotNull
    public final DiscordThemeObject getEffectiveTheme() {
        DiscordTheme discordTheme = themeOverride;
        if (discordTheme == null) {
            return getTheme();
        }
        EnumMap<DiscordTheme, DiscordThemeObject> enumMap = themes;
        DiscordThemeObject discordThemeObject = enumMap.get(discordTheme);
        if (discordThemeObject == null) {
            discordThemeObject = INSTANCE.initThemeObject(discordTheme);
            enumMap.put((EnumMap<DiscordTheme, DiscordThemeObject>) discordTheme, (DiscordTheme) discordThemeObject);
        }
        Intrinsics.checkNotNullExpressionValue(discordThemeObject, "getOrPut(...)");
        return discordThemeObject;
    }

    public final float getSaturationFactor() {
        return saturationFactor;
    }

    @NotNull
    public final DiscordThemeObject getTheme() {
        DiscordTheme discordTheme = theme;
        if (discordTheme == null) {
            discordTheme = DiscordTheme.DARK;
        } else if (discordTheme == null) {
            Intrinsics.throwUninitializedPropertyAccessException("theme");
            discordTheme = null;
        }
        EnumMap<DiscordTheme, DiscordThemeObject> enumMap = themes;
        DiscordThemeObject discordThemeObject = enumMap.get(discordTheme);
        if (discordThemeObject == null) {
            discordThemeObject = INSTANCE.initThemeObject(discordTheme);
            enumMap.put((EnumMap<DiscordTheme, DiscordThemeObject>) discordTheme, (DiscordTheme) discordThemeObject);
        }
        Intrinsics.checkNotNullExpressionValue(discordThemeObject, "getOrPut(...)");
        return discordThemeObject;
    }

    public final DiscordTheme getThemeOverride() {
        return themeOverride;
    }

    public final void init(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        resources = context.getResources();
        resourceTheme = context.getTheme();
        setTheme(DiscordTheme.DARK);
    }

    public final boolean isInitialized() {
        return theme != null;
    }

    public final boolean isThemeDark() {
        DiscordTheme discordTheme = theme;
        if (discordTheme == null) {
            Intrinsics.throwUninitializedPropertyAccessException("theme");
            discordTheme = null;
        }
        return discordTheme != DiscordTheme.LIGHT;
    }

    public final boolean isThemeLight() {
        DiscordTheme discordTheme = theme;
        if (discordTheme == null) {
            Intrinsics.throwUninitializedPropertyAccessException("theme");
            discordTheme = null;
        }
        return discordTheme == DiscordTheme.LIGHT;
    }

    public final boolean isVisualRefreshEnabled() {
        return visualRefreshEnabled;
    }

    public final void setAshTheme() {
        setTheme(DiscordTheme.ASH);
    }

    public final void setDarkTheme() {
        setTheme(DiscordTheme.DARK);
    }

    public final void setLightTheme() {
        setTheme(DiscordTheme.LIGHT);
    }

    public final void setOnyxTheme() {
        setTheme(DiscordTheme.ONYX);
    }

    public final void setSaturationFactor(double value) {
        saturationFactor = (float) value;
        themes.clear();
    }

    public final void setThemeOverride(DiscordTheme theme2) {
        themeOverride = theme2;
    }

    public final void setVisualRefreshEnabled(boolean enabled) {
        visualRefreshEnabled = enabled;
        themes.clear();
    }

    public final boolean shouldShowSplashImage$theme_release() {
        return showSplashImage;
    }

    public final void updateSystemUi(@NotNull View view) {
        Intrinsics.checkNotNullParameter(view, "view");
        UpdateSystemUiKt.updateSystemUi(view);
    }

    public final void updateWindowBackground(@NotNull Context context, boolean showSplashImage2) {
        Intrinsics.checkNotNullParameter(context, "context");
        showSplashImage = showSplashImage2;
        Activity activity = null;
        Activity activity2 = context instanceof Activity ? (Activity) context : null;
        if (activity2 == null) {
            ReactContext reactContext = context instanceof ReactContext ? (ReactContext) context : null;
            if (reactContext != null) {
                activity = reactContext.getCurrentActivity();
            }
        } else {
            activity = activity2;
        }
        if (activity != null) {
            ActivityThemeUtils.INSTANCE.updateWindowBackground$theme_release(activity);
        }
    }

    public final void updateSystemUi(@NotNull Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        UpdateSystemUiKt.updateSystemUi(activity);
    }

    @NotNull
    public final DiscordThemeObject getTheme(@NotNull DiscordTheme themeType) {
        Intrinsics.checkNotNullParameter(themeType, "themeType");
        EnumMap<DiscordTheme, DiscordThemeObject> enumMap = themes;
        DiscordThemeObject discordThemeObject = enumMap.get(themeType);
        if (discordThemeObject == null) {
            discordThemeObject = INSTANCE.initThemeObject(themeType);
            enumMap.put((EnumMap<DiscordTheme, DiscordThemeObject>) themeType, (DiscordTheme) discordThemeObject);
        }
        Intrinsics.checkNotNullExpressionValue(discordThemeObject, "getOrPut(...)");
        return discordThemeObject;
    }
}
