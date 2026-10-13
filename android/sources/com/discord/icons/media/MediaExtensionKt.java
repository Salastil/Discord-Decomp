package com.discord.icons.media;

import android.os.Build;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.c0;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0012\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0003\u001a\u0010\u0010\u0003\u001a\u00020\u00012\u0006\u0010\u0004\u001a\u00020\u0005H\u0000\u001a\u0012\u0010\u0006\u001a\u00020\u00052\b\u0010\u0007\u001a\u0004\u0018\u00010\u0001H\u0000\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\b"}, d2 = {"ANIMATED_IMAGE_EXTENSION", "", "STATIC_IMAGE_EXTENSION", "getMediaExtension", "allowAnimation", "", "isImageHashAnimated", "imageHash", "icons_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class MediaExtensionKt {

    @NotNull
    private static final String ANIMATED_IMAGE_EXTENSION;

    @NotNull
    private static final String STATIC_IMAGE_EXTENSION;

    static {
        List g6 = c0.g(28, 29);
        int i5 = Build.VERSION.SDK_INT;
        ANIMATED_IMAGE_EXTENSION = g6.contains(Integer.valueOf(i5)) ? "gif" : "webp";
        STATIC_IMAGE_EXTENSION = c0.g(28, 29).contains(Integer.valueOf(i5)) ? "png" : "webp";
    }

    @NotNull
    public static final String getMediaExtension(boolean z5) {
        return z5 ? ANIMATED_IMAGE_EXTENSION : STATIC_IMAGE_EXTENSION;
    }

    public static final boolean isImageHashAnimated(String str) {
        if (str == null) {
            return true;
        }
        return x.o(str, "a_", false);
    }
}
