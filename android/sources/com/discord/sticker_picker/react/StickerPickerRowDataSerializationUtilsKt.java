package com.discord.sticker_picker.react;

import com.discord.react.utilities.NativeArrayExtensionsKt;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.discord.sticker_picker.StickerPickerRow;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.modules.dialog.AlertFragment;
import java.util.ArrayList;
import java.util.Iterator;
import k0.d;
import kotlin.Metadata;
import kotlin.collections.d0;
import kotlin.collections.r0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.ranges.IntRange;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u0010\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0000¨\u0006\u0004"}, d2 = {"deserializeStickerPickerRowData", "Lcom/discord/sticker_picker/StickerPickerRow;", "data", "Lcom/facebook/react/bridge/ReadableMap;", "sticker_picker_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nStickerPickerRowDataSerializationUtils.kt\nKotlin\n*S Kotlin\n*F\n+ 1 StickerPickerRowDataSerializationUtils.kt\ncom/discord/sticker_picker/react/StickerPickerRowDataSerializationUtilsKt\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,48:1\n1563#2:49\n1634#2,3:50\n*S KotlinDebug\n*F\n+ 1 StickerPickerRowDataSerializationUtils.kt\ncom/discord/sticker_picker/react/StickerPickerRowDataSerializationUtilsKt\n*L\n18#1:49\n18#1:50,3\n*E\n"})
/* loaded from: classes.dex */
public final class StickerPickerRowDataSerializationUtilsKt {
    @NotNull
    public static final StickerPickerRow deserializeStickerPickerRowData(@NotNull ReadableMap data) {
        StickerPickerRow.Sticker.Type type;
        Intrinsics.checkNotNullParameter(data, "data");
        double d6 = data.getDouble("rowContentWidth");
        int i5 = data.getInt("rowContentPaddingVertical");
        int i6 = data.getInt("itemSize");
        ReadableArray nonNullArray = NativeMapExtensionsKt.getNonNullArray(data, AlertFragment.ARG_ITEMS);
        IntRange sizeRange = NativeArrayExtensionsKt.sizeRange(nonNullArray);
        ArrayList arrayList = new ArrayList(d0.l(sizeRange, 10));
        Iterator it = sizeRange.iterator();
        while (it.hasNext()) {
            int nextInt = ((r0) it).nextInt();
            ReadableMap map = nonNullArray.getMap(nextInt);
            StickerPickerRow.Sticker sticker = null;
            String string = map != null ? map.getString("stickerId") : null;
            if (!nonNullArray.isNull(nextInt) && string != null && !StringsKt.K(string)) {
                ReadableMap map2 = nonNullArray.getMap(nextInt);
                Intrinsics.checkNotNull(map2);
                String nonNullString = NativeMapExtensionsKt.getNonNullString(map2, "stickerId");
                String nonNullString2 = NativeMapExtensionsKt.getNonNullString(map2, "stickerName");
                int i10 = map2.getInt("stickerType");
                if (i10 == 1) {
                    type = StickerPickerRow.Sticker.Type.PNG;
                } else if (i10 == 2) {
                    type = StickerPickerRow.Sticker.Type.APNG;
                } else if (i10 == 3) {
                    type = StickerPickerRow.Sticker.Type.LOTTIE;
                } else {
                    if (i10 != 4) {
                        throw new IllegalArgumentException(d.i(i10, "Unknown type "));
                    }
                    type = StickerPickerRow.Sticker.Type.GIF;
                }
                sticker = new StickerPickerRow.Sticker(nonNullString, nonNullString2, type, map2.getBoolean("stickerAnimated"), NativeMapExtensionsKt.getNonNullString(map2, "stickerUrl"), map2.getBoolean("stickerDisabled"), map2.getBoolean("stickerOpaque"), NativeMapExtensionsKt.getBoolean(map2, "stickerLocked", false));
            }
            arrayList.add(sticker);
        }
        return new StickerPickerRow(d6, i5, i6, arrayList);
    }
}
