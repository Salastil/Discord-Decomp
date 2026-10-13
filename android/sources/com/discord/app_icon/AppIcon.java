package com.discord.app_icon;

import a3.e;
import com.facebook.react.devsupport.StackTraceHelper;
import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b#\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0019\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u000e\u0010\u0004\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0011\u0010$\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b%\u0010\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013j\u0002\b\u0014j\u0002\b\u0015j\u0002\b\u0016j\u0002\b\u0017j\u0002\b\u0018j\u0002\b\u0019j\u0002\b\u001aj\u0002\b\u001bj\u0002\b\u001cj\u0002\b\u001dj\u0002\b\u001ej\u0002\b\u001fj\u0002\b j\u0002\b!j\u0002\b\"j\u0002\b#¨\u0006&"}, d2 = {"Lcom/discord/app_icon/AppIcon;", "", StackTraceHelper.ID_KEY, "", "aliasSuffix", "<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", "getId", "()Ljava/lang/String;", "DEFAULT", "BRAND_INVERTED", "BRAND_DARK", "MATTE_LIGHT", "MATTE_DARK", "PASTEL", "PIRATE", "CAMO", "SUNSET", "GALAXY", "Y2K", "CHERRY_BLOSSOM", "BEANIE", "GAMING", "CIRCUIT", "HOLO_WAVES", "BLUSH", "ANGRY", "MANGA", "CONTROLLER", "MUSHROOM", "BLURPLE_TWILIGHT", "IN_RAINBOWS", "MIDNIGHT_PRISM", "COLOR_WAVE", "TREAT", "TRICK", "alias", "getAlias", "app_icon_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class AppIcon {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ AppIcon[] $VALUES;

    @NotNull
    private final String aliasSuffix;

    @NotNull
    private final String id;
    public static final AppIcon DEFAULT = new AppIcon("DEFAULT", 0, "AppIcon", "MainDefault");
    public static final AppIcon BRAND_INVERTED = new AppIcon("BRAND_INVERTED", 1, "BrandInvertedIcon", "MainBrandInverted");
    public static final AppIcon BRAND_DARK = new AppIcon("BRAND_DARK", 2, "BrandDarkIcon", "MainBrandDark");
    public static final AppIcon MATTE_LIGHT = new AppIcon("MATTE_LIGHT", 3, "MatteLightIcon", "MainMatteLight");
    public static final AppIcon MATTE_DARK = new AppIcon("MATTE_DARK", 4, "MatteDarkIcon", "MainMatteDark");
    public static final AppIcon PASTEL = new AppIcon("PASTEL", 5, "PastelIcon", "MainPastel");
    public static final AppIcon PIRATE = new AppIcon("PIRATE", 6, "PirateIcon", "MainPirate");
    public static final AppIcon CAMO = new AppIcon("CAMO", 7, "CamoIcon", "MainCamo");
    public static final AppIcon SUNSET = new AppIcon("SUNSET", 8, "SunsetIcon", "MainSunset");
    public static final AppIcon GALAXY = new AppIcon("GALAXY", 9, "GalaxyIcon", "MainGalaxy");
    public static final AppIcon Y2K = new AppIcon("Y2K", 10, "Y2KIcon", "MainY2K");
    public static final AppIcon CHERRY_BLOSSOM = new AppIcon("CHERRY_BLOSSOM", 11, "CherryBlossomIcon", "MainCherryBlossom");
    public static final AppIcon BEANIE = new AppIcon("BEANIE", 12, "BeanieIcon", "MainBeanie");
    public static final AppIcon GAMING = new AppIcon("GAMING", 13, "GamingIcon", "MainGaming");
    public static final AppIcon CIRCUIT = new AppIcon("CIRCUIT", 14, "CircuitIcon", "MainCircuit");
    public static final AppIcon HOLO_WAVES = new AppIcon("HOLO_WAVES", 15, "HoloWavesIcon", "MainHoloWaves");
    public static final AppIcon BLUSH = new AppIcon("BLUSH", 16, "BlushIcon", "MainBlush");
    public static final AppIcon ANGRY = new AppIcon("ANGRY", 17, "AngryIcon", "MainAngry");
    public static final AppIcon MANGA = new AppIcon("MANGA", 18, "MangaIcon", "MainManga");
    public static final AppIcon CONTROLLER = new AppIcon("CONTROLLER", 19, "ControllerIcon", "MainController");
    public static final AppIcon MUSHROOM = new AppIcon("MUSHROOM", 20, "MushroomIcon", "MainMushroom");
    public static final AppIcon BLURPLE_TWILIGHT = new AppIcon("BLURPLE_TWILIGHT", 21, "BlurpleTwilightIcon", "MainBlurpleTwilight");
    public static final AppIcon IN_RAINBOWS = new AppIcon("IN_RAINBOWS", 22, "InRainbowsIcon", "MainInRainbows");
    public static final AppIcon MIDNIGHT_PRISM = new AppIcon("MIDNIGHT_PRISM", 23, "MidnightPrismIcon", "MainMidnightPrism");
    public static final AppIcon COLOR_WAVE = new AppIcon("COLOR_WAVE", 24, "ColorWaveIcon", "MainColorWave");
    public static final AppIcon TREAT = new AppIcon("TREAT", 25, "TreatIcon", "MainTreat");
    public static final AppIcon TRICK = new AppIcon("TRICK", 26, "TrickIcon", "MainTrick");

    private static final /* synthetic */ AppIcon[] $values() {
        return new AppIcon[]{DEFAULT, BRAND_INVERTED, BRAND_DARK, MATTE_LIGHT, MATTE_DARK, PASTEL, PIRATE, CAMO, SUNSET, GALAXY, Y2K, CHERRY_BLOSSOM, BEANIE, GAMING, CIRCUIT, HOLO_WAVES, BLUSH, ANGRY, MANGA, CONTROLLER, MUSHROOM, BLURPLE_TWILIGHT, IN_RAINBOWS, MIDNIGHT_PRISM, COLOR_WAVE, TREAT, TRICK};
    }

    static {
        AppIcon[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
    }

    private AppIcon(String str, int i5, String str2, String str3) {
        this.id = str2;
        this.aliasSuffix = str3;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static AppIcon valueOf(String str) {
        return (AppIcon) Enum.valueOf(AppIcon.class, str);
    }

    public static AppIcon[] values() {
        return (AppIcon[]) $VALUES.clone();
    }

    @NotNull
    public final String getAlias() {
        return e.k("com.discord.main.", this.aliasSuffix);
    }

    @NotNull
    public final String getId() {
        return this.id;
    }
}
