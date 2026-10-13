package com.discord.react_fork_overrides.forks;

import android.net.Uri;
import com.facebook.react.views.imagehelper.ImageSource;
import java.io.File;
import k4.i;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\u0004\u001a\u00020\u0005J\u0010\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u0007H\u0002¨\u0006\t"}, d2 = {"Lcom/discord/react_fork_overrides/forks/ImageSourceOverride;", "", "<init>", "()V", "override", "", "resolvedOTAAssetOrDefaultToDrawable", "", "mSource", "react_fork_overrides_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nImageSourceOverride.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ImageSourceOverride.kt\ncom/discord/react_fork_overrides/forks/ImageSourceOverride\n+ 2 Uri.kt\nandroidx/core/net/UriKt\n*L\n1#1,48:1\n29#2:49\n*S KotlinDebug\n*F\n+ 1 ImageSourceOverride.kt\ncom/discord/react_fork_overrides/forks/ImageSourceOverride\n*L\n26#1:49\n*E\n"})
/* loaded from: classes.dex */
public final class ImageSourceOverride {

    @NotNull
    public static final ImageSourceOverride INSTANCE = new ImageSourceOverride();

    private ImageSourceOverride() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final String override$lambda$0(String str) {
        ImageSourceOverride imageSourceOverride = INSTANCE;
        Intrinsics.checkNotNull(str);
        return imageSourceOverride.resolvedOTAAssetOrDefaultToDrawable(str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final String resolvedOTAAssetOrDefaultToDrawable(String mSource) {
        String path;
        Uri parse = Uri.parse(mSource);
        if (parse.getPathSegments().contains("otas") && (path = parse.getPath()) != null) {
            File file = new File(path);
            if (!file.exists()) {
                Intrinsics.checkNotNullParameter(file, "<this>");
                String name = file.getName();
                Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                return StringsKt.Z(name, name);
            }
        }
        return mSource;
    }

    public final void override() {
        ImageSource.INSTANCE.setSourceOverride(new ah.a(26));
        i.f13174s = new ImageSourceOverride$override$2(this);
    }
}
