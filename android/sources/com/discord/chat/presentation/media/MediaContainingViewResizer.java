package com.discord.chat.presentation.media;

import android.view.View;
import android.view.ViewGroup;
import com.facebook.react.uimanager.ViewProps;
import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001:\u0001\u000eB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J4\u0010\u0004\u001a\u00020\u0005*\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\b2\u0006\u0010\n\u001a\u00020\b2\u0006\u0010\u000b\u001a\u00020\b2\b\b\u0002\u0010\f\u001a\u00020\r¨\u0006\u000f"}, d2 = {"Lcom/discord/chat/presentation/media/MediaContainingViewResizer;", "", "<init>", "()V", "resizeLayoutParams", "", "Landroid/view/View;", "targetWidthPx", "", "targetHeightPx", "maxWidthPx", "maxHeightPx", ViewProps.RESIZE_MODE, "Lcom/discord/chat/presentation/media/MediaContainingViewResizer$ResizeMode;", "ResizeMode", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class MediaContainingViewResizer {

    @NotNull
    public static final MediaContainingViewResizer INSTANCE = new MediaContainingViewResizer();

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0006\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/presentation/media/MediaContainingViewResizer$ResizeMode;", "", "<init>", "(Ljava/lang/String;I)V", "Fill", "Wrap", "Cover", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class ResizeMode {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ ResizeMode[] $VALUES;
        public static final ResizeMode Fill = new ResizeMode("Fill", 0);
        public static final ResizeMode Wrap = new ResizeMode("Wrap", 1);
        public static final ResizeMode Cover = new ResizeMode("Cover", 2);

        private static final /* synthetic */ ResizeMode[] $values() {
            return new ResizeMode[]{Fill, Wrap, Cover};
        }

        static {
            ResizeMode[] $values = $values();
            $VALUES = $values;
            $ENTRIES = b.p($values);
        }

        private ResizeMode(String str, int i5) {
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static ResizeMode valueOf(String str) {
            return (ResizeMode) Enum.valueOf(ResizeMode.class, str);
        }

        public static ResizeMode[] values() {
            return (ResizeMode[]) $VALUES.clone();
        }
    }

    private MediaContainingViewResizer() {
    }

    public static /* synthetic */ void resizeLayoutParams$default(MediaContainingViewResizer mediaContainingViewResizer, View view, int i5, int i6, int i10, int i11, ResizeMode resizeMode, int i12, Object obj) {
        if ((i12 & 16) != 0) {
            resizeMode = ResizeMode.Fill;
        }
        mediaContainingViewResizer.resizeLayoutParams(view, i5, i6, i10, i11, resizeMode);
    }

    public final void resizeLayoutParams(@NotNull View view, int i5, int i6, int i10, int i11, @NotNull ResizeMode resizeMode) {
        float f2;
        Intrinsics.checkNotNullParameter(view, "<this>");
        Intrinsics.checkNotNullParameter(resizeMode, "resizeMode");
        boolean z5 = resizeMode == ResizeMode.Fill || resizeMode == ResizeMode.Cover || i5 > i10 || i6 > i11;
        float f10 = view.getResources().getDisplayMetrics().density;
        float f11 = 1.0f;
        if (z5) {
            float f12 = i5;
            f2 = Math.min(i10, f12 * f10) / f12;
        } else {
            f2 = 1.0f;
        }
        if (z5) {
            float f13 = i6;
            f11 = Math.min(i11, f10 * f13) / f13;
        }
        float min = Math.min(f11, f2);
        int i12 = (int) (i5 * min);
        int i13 = (int) (i6 * min);
        if (resizeMode == ResizeMode.Cover) {
            i12 = Math.max(i12, i13);
            i13 = i12;
        }
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        if (layoutParams == null) {
            view.setLayoutParams(new ViewGroup.LayoutParams(i12, i13));
            return;
        }
        if (i12 != layoutParams.width || i13 != layoutParams.height) {
            layoutParams.width = i12;
            layoutParams.height = i13;
        }
        view.setLayoutParams(layoutParams);
    }
}
