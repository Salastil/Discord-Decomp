package com.discord.fastest_list.android.placeholder;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.view.ViewGroup;
import com.discord.fastest_list.android.FastestListSections;
import com.discord.fastest_list.android.placeholder.FastestListPlaceholderAlignment;
import com.discord.fastest_list.android.placeholder.FastestListPlaceholderType;
import com.discord.misc.utilities.drawable.CustomDrawDrawable;
import fo.n;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0000\u0018\u00002\u00020\u0001:\u0001\u000fB\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0018\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rH\u0016J\u0010\u0010\u000e\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bH\u0016R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0010"}, d2 = {"Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderTypeShape;", "Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholder;", "config", "Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderType$Shape;", "<init>", "(Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderType$Shape;)V", "placeholder", "Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderTypeShape$ShapeDrawable;", "onPlaceholderShouldBind", "", "view", "Landroid/view/ViewGroup;", "item", "Lcom/discord/fastest_list/android/FastestListSections$Entry;", "onPlaceholderShouldUnbind", "ShapeDrawable", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class FastestListPlaceholderTypeShape extends FastestListPlaceholder {

    @NotNull
    private final ShapeDrawable placeholder;

    @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0002\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\f"}, d2 = {"Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderTypeShape$ShapeDrawable;", "Lcom/discord/misc/utilities/drawable/CustomDrawDrawable;", "config", "Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderType$Shape;", "<init>", "(Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderType$Shape;)V", "paint", "Landroid/graphics/Paint;", "draw", "", "canvas", "Landroid/graphics/Canvas;", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class ShapeDrawable extends CustomDrawDrawable {

        @NotNull
        private final FastestListPlaceholderType.Shape config;

        @NotNull
        private final Paint paint;

        @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
        public /* synthetic */ class WhenMappings {
            public static final /* synthetic */ int[] $EnumSwitchMapping$0;
            public static final /* synthetic */ int[] $EnumSwitchMapping$1;

            static {
                int[] iArr = new int[FastestListPlaceholderAlignment.Vertical.values().length];
                try {
                    iArr[FastestListPlaceholderAlignment.Vertical.TOP.ordinal()] = 1;
                } catch (NoSuchFieldError unused) {
                }
                try {
                    iArr[FastestListPlaceholderAlignment.Vertical.BOTTOM.ordinal()] = 2;
                } catch (NoSuchFieldError unused2) {
                }
                try {
                    iArr[FastestListPlaceholderAlignment.Vertical.CENTER.ordinal()] = 3;
                } catch (NoSuchFieldError unused3) {
                }
                $EnumSwitchMapping$0 = iArr;
                int[] iArr2 = new int[FastestListPlaceholderType.Shape.Type.values().length];
                try {
                    iArr2[FastestListPlaceholderType.Shape.Type.CIRCLE.ordinal()] = 1;
                } catch (NoSuchFieldError unused4) {
                }
                try {
                    iArr2[FastestListPlaceholderType.Shape.Type.RECT.ordinal()] = 2;
                } catch (NoSuchFieldError unused5) {
                }
                $EnumSwitchMapping$1 = iArr2;
            }
        }

        public ShapeDrawable(@NotNull FastestListPlaceholderType.Shape config) {
            Intrinsics.checkNotNullParameter(config, "config");
            this.config = config;
            Paint paint = new Paint();
            paint.setAntiAlias(true);
            paint.setColor(config.getColor());
            this.paint = paint;
        }

        @Override // com.discord.misc.utilities.drawable.CustomDrawDrawable, android.graphics.drawable.Drawable
        public void draw(@NotNull Canvas canvas) {
            float f2;
            float f10;
            int i5;
            float f11;
            Intrinsics.checkNotNullParameter(canvas, "canvas");
            float width = getBounds().width();
            float height = getBounds().height();
            Float width2 = this.config.getWidth();
            float floatValue = width2 != null ? width2.floatValue() : ((width - (this.config.getPaddingHorizontal() * 2)) - (this.config.getGap() * (this.config.getCount() - 1))) / this.config.getCount();
            Float height2 = this.config.getHeight();
            float floatValue2 = height2 != null ? height2.floatValue() : height - (this.config.getPaddingVertical() * 2);
            if (this.config.getCount() > 1) {
                f2 = width - (this.config.getCount() * floatValue);
                f10 = this.config.getCount() - 1;
            } else {
                f2 = width - floatValue;
                f10 = 2;
            }
            float f12 = f2 / f10;
            int count = this.config.getCount();
            int i6 = 0;
            while (i6 < count) {
                float f13 = this.config.getCount() == 1 ? f12 : (floatValue + f12) * i6;
                int i10 = WhenMappings.$EnumSwitchMapping$1[this.config.getType().ordinal()];
                if (i10 == 1) {
                    i5 = i6;
                    float f14 = floatValue / 2.0f;
                    canvas.drawCircle(f13 + f14, height / 2.0f, f14, this.paint);
                } else {
                    if (i10 != 2) {
                        throw new n();
                    }
                    int i11 = i6;
                    float f15 = f13;
                    float f16 = f15 + floatValue;
                    int i12 = WhenMappings.$EnumSwitchMapping$0[this.config.getVerticalAlignment().ordinal()];
                    if (i12 == 1) {
                        f11 = 0.0f;
                    } else if (i12 == 2) {
                        f11 = height - floatValue2;
                    } else {
                        if (i12 != 3) {
                            throw new n();
                        }
                        f11 = (height / 2.0f) - (floatValue2 / 2.0f);
                    }
                    i5 = i11;
                    canvas.drawRoundRect(f15, f11, f16, f11 + floatValue2, this.config.getBorderRadius(), this.config.getBorderRadius(), this.paint);
                }
                i6 = i5 + 1;
            }
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public FastestListPlaceholderTypeShape(@NotNull FastestListPlaceholderType.Shape config) {
        super(null);
        Intrinsics.checkNotNullParameter(config, "config");
        this.placeholder = new ShapeDrawable(config);
    }

    @Override // com.discord.fastest_list.android.placeholder.FastestListPlaceholder
    public void onPlaceholderShouldBind(@NotNull ViewGroup view, @NotNull FastestListSections.Entry item) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(item, "item");
        view.setBackground(this.placeholder);
    }

    @Override // com.discord.fastest_list.android.placeholder.FastestListPlaceholder
    public void onPlaceholderShouldUnbind(@NotNull ViewGroup view) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setBackground(null);
    }
}
