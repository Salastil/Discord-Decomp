package com.discord.fastest_list.react;

import a3.e;
import com.discord.fastest_list.android.placeholder.FastestListPlaceholderAlignment;
import com.discord.fastest_list.android.placeholder.FastestListPlaceholderType;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.facebook.react.bridge.ReadableMap;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000(\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\u001a\u0015\u0010\u0004\u001a\u00020\u0005*\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0080\u0002\u001a\u001d\u0010\u0004\u001a\u00020\t*\u00020\n2\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\u0007\u001a\u00020\bH\u0082\u0002\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0003\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"PLACEHOLDER_TYPE_NONE", "", "PLACEHOLDER_TYPE_SHAPE", "PLACEHOLDER_TYPE_FEED_ITEM", "invoke", "Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderType;", "Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderType$Companion;", "value", "Lcom/facebook/react/bridge/ReadableMap;", "Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderType$Shape$Type;", "Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderType$Shape$Type$Companion;", "key", "", "fastest_list_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class FastestListDeserializerPlaceholderTypeKt {
    private static final int PLACEHOLDER_TYPE_FEED_ITEM = 2;
    private static final int PLACEHOLDER_TYPE_NONE = 0;
    private static final int PLACEHOLDER_TYPE_SHAPE = 1;

    @NotNull
    public static final FastestListPlaceholderType invoke(@NotNull FastestListPlaceholderType.Companion companion, @NotNull ReadableMap value) {
        Intrinsics.checkNotNullParameter(companion, "<this>");
        Intrinsics.checkNotNullParameter(value, "value");
        int i5 = value.getInt("placeholderType");
        if (i5 == 0) {
            return FastestListPlaceholderType.None.INSTANCE;
        }
        if (i5 == 1) {
            float dpToPx = SizeUtilsKt.getDpToPx(value.getInt("borderRadius"));
            int i6 = value.getInt("placeholderShapeColor");
            int i10 = value.getInt("placeholderShapeCount");
            float dpToPx2 = SizeUtilsKt.getDpToPx(value.getInt("placeholderShapeGap"));
            FastestListPlaceholderType.Shape.Type invoke = invoke(FastestListPlaceholderType.Shape.Type.INSTANCE, "placeholderShape", value);
            return new FastestListPlaceholderType.Shape(dpToPx, i6, i10, dpToPx2, SizeUtilsKt.getDpToPx(value.getInt("placeholderShapePaddingHorizontal")), SizeUtilsKt.getDpToPx(value.getInt("placeholderShapePaddingVertical")), NativeMapExtensionsKt.getNullableInt$default(value, "width", null, 2, null) != null ? Float.valueOf(SizeUtilsKt.getDpToPx(r1.intValue())) : null, NativeMapExtensionsKt.getNullableInt$default(value, "height", null, 2, null) != null ? Float.valueOf(SizeUtilsKt.getDpToPx(r1.intValue())) : null, invoke, FastestListPlaceholderAlignment.Vertical.INSTANCE.parse(NativeMapExtensionsKt.getNonNullString(value, "verticalAlignment")), FastestListPlaceholderAlignment.Horizontal.INSTANCE.parse(NativeMapExtensionsKt.getNonNullString(value, "horizontalAlignment")));
        }
        if (i5 != 2) {
            throw new IllegalArgumentException(d.i(i5, "Unknown placeholder type "));
        }
        Integer nullableInt$default = NativeMapExtensionsKt.getNullableInt$default(value, "placeholderFeedBackgroundColor", null, 2, null);
        int intValue = nullableInt$default != null ? nullableInt$default.intValue() : 0;
        float dpToPx3 = SizeUtilsKt.getDpToPx(value.getInt("borderRadius"));
        float dpToPx4 = SizeUtilsKt.getDpToPx(value.getInt("borderTopLeftRadius"));
        float dpToPx5 = SizeUtilsKt.getDpToPx(value.getInt("borderTopRightRadius"));
        float dpToPx6 = SizeUtilsKt.getDpToPx(value.getInt("borderBottomLeftRadius"));
        float dpToPx7 = SizeUtilsKt.getDpToPx(value.getInt("borderBottomRightRadius"));
        int i11 = value.getInt("placeholderFeedColor");
        boolean z5 = value.getBoolean("divider");
        Integer nullableInt$default2 = NativeMapExtensionsKt.getNullableInt$default(value, "dividerColor", null, 2, null);
        return new FastestListPlaceholderType.FeedItem(intValue, dpToPx3, dpToPx4, dpToPx5, dpToPx6, dpToPx7, i11, z5, nullableInt$default2 != null ? nullableInt$default2.intValue() : 0, SizeUtilsKt.getDpToPx(value.getInt("dividerPaddingLeft")), SizeUtilsKt.getDpToPx(value.getInt("dividerPaddingRight")), SizeUtilsKt.getDpToPx(value.getInt("placeholderFeedPadding")), invoke(FastestListPlaceholderType.Shape.Type.INSTANCE, "placeholderFeedShape", value), SizeUtilsKt.getDpToPx(value.getInt("placeholderFeedShapeSize")), SizeUtilsKt.getDpToPx(value.getInt("placeholderFeedLabelPadding")), (float) value.getDouble("placeholderFeedLabelPaddingInnerRatio"), SizeUtilsKt.getDpToPx(value.getInt("placeholderFeedLabelSize")), SizeUtilsKt.getDpToPx(value.getInt("placeholderFeedLabelSecondarySize")));
    }

    private static final FastestListPlaceholderType.Shape.Type invoke(FastestListPlaceholderType.Shape.Type.Companion companion, String str, ReadableMap readableMap) {
        Intrinsics.checkNotNullParameter(companion, "<this>");
        String nonNullString = NativeMapExtensionsKt.getNonNullString(readableMap, str, "circle");
        if (Intrinsics.areEqual(nonNullString, "circle")) {
            return FastestListPlaceholderType.Shape.Type.CIRCLE;
        }
        if (Intrinsics.areEqual(nonNullString, "rect")) {
            return FastestListPlaceholderType.Shape.Type.RECT;
        }
        throw new IllegalArgumentException(e.k("Unknown placeholder shape type ", nonNullString));
    }
}
