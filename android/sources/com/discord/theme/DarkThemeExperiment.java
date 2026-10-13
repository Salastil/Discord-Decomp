package com.discord.theme;

import android.content.res.Resources;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0000\u0018\u00002\u00020\u0001B\u001b\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\u0010\u0004\u001a\u00060\u0005R\u00020\u0003¢\u0006\u0004\b\u0006\u0010\u0007¨\u0006\b"}, d2 = {"Lcom/discord/theme/DarkThemeExperiment;", "Lcom/discord/theme/DarkTheme;", "resources", "Landroid/content/res/Resources;", "theme", "Landroid/content/res/Resources$Theme;", "<init>", "(Landroid/content/res/Resources;Landroid/content/res/Resources$Theme;)V", "theme_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class DarkThemeExperiment extends DarkTheme {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public DarkThemeExperiment(@NotNull Resources resources, @NotNull Resources.Theme theme) {
        super(resources, theme);
        Intrinsics.checkNotNullParameter(resources, "resources");
        Intrinsics.checkNotNullParameter(theme, "theme");
    }
}
