package com.discord.fastest_list.react;

import com.discord.fastest_list.android.FastestListSections;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.react.utilities.NativeArrayExtensionsKt;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import java.util.ArrayList;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000D\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\u001a\u0015\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u0004H\u0080\u0002\u001aO\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\f2\u0006\u0010\u000e\u001a\u00020\f2\u0006\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\f2\u0006\u0010\u0012\u001a\u00020\u0010H\u0002¢\u0006\u0002\u0010\u0013\u001aA\u0010\u0014\u001a\u0004\u0018\u00010\u00152\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\u0016\u001a\u00020\u00102\b\u0010\u0017\u001a\u0004\u0018\u00010\f2\u0006\u0010\u0018\u001a\u00020\u0010H\u0002¢\u0006\u0002\u0010\u0019\u001aA\u0010\u001a\u001a\u0004\u0018\u00010\u001b2\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\u001c\u001a\u00020\u00102\b\u0010\u001d\u001a\u0004\u0018\u00010\f2\u0006\u0010\u001e\u001a\u00020\u0010H\u0002¢\u0006\u0002\u0010\u001f¨\u0006 "}, d2 = {"invoke", "Lcom/discord/fastest_list/android/FastestListSections$Versioned;", "Lcom/discord/fastest_list/android/FastestListSections$Versioned$Companion;", "value", "Lcom/facebook/react/bridge/ReadableMap;", "createSectionItem", "Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionItem;", "listId", "", "keysAreUniform", "", "sectionIndex", "", "sectionItemCount", "sectionItemIndex", "itemKeys", "Lcom/facebook/react/bridge/ReadableArray;", "itemSizeUniform", "itemSizes", "(Ljava/lang/String;ZIIILcom/facebook/react/bridge/ReadableArray;Ljava/lang/Integer;Lcom/facebook/react/bridge/ReadableArray;)Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionItem;", "createSectionHeader", "Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionHeader;", "sectionHeaderKeys", "sectionHeaderSizeUniform", "sectionHeaderSizes", "(Ljava/lang/String;ZILcom/facebook/react/bridge/ReadableArray;Ljava/lang/Integer;Lcom/facebook/react/bridge/ReadableArray;)Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionHeader;", "createSectionFooter", "Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionFooter;", "sectionFooterKeys", "sectionFooterSizeUniform", "sectionFooterSizes", "(Ljava/lang/String;ZILcom/facebook/react/bridge/ReadableArray;Ljava/lang/Integer;Lcom/facebook/react/bridge/ReadableArray;)Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionFooter;", "fastest_list_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class FastestListDeserializerSectionsKt {
    private static final FastestListSections.Entry.SectionFooter createSectionFooter(String str, boolean z5, int i5, ReadableArray readableArray, Integer num, ReadableArray readableArray2) {
        int intValue = num != null ? num.intValue() : SizeUtilsKt.getDpToPx(readableArray2.getDouble(i5));
        if (intValue > 0) {
            return new FastestListSections.Entry.SectionFooter(FastestListSections.Entry.SectionFooter.INSTANCE.createKey(str, i5, !z5 ? readableArray.getString(i5) : null), FastestListSections.Section.m986constructorimpl(i5), intValue, null);
        }
        return null;
    }

    private static final FastestListSections.Entry.SectionHeader createSectionHeader(String str, boolean z5, int i5, ReadableArray readableArray, Integer num, ReadableArray readableArray2) {
        int intValue = num != null ? num.intValue() : SizeUtilsKt.getDpToPx(readableArray2.getDouble(i5));
        if (intValue > 0) {
            return new FastestListSections.Entry.SectionHeader(FastestListSections.Entry.SectionHeader.INSTANCE.createKey(str, i5, !z5 ? readableArray.getString(i5) : null), FastestListSections.Section.m986constructorimpl(i5), intValue, null);
        }
        return null;
    }

    private static final FastestListSections.Entry.SectionItem createSectionItem(String str, boolean z5, int i5, int i6, int i10, ReadableArray readableArray, Integer num, ReadableArray readableArray2) {
        int dpToPx;
        String str2;
        if (num != null) {
            dpToPx = num.intValue();
        } else {
            ReadableMap map = readableArray2.getMap(i5);
            Intrinsics.checkNotNull(map);
            dpToPx = SizeUtilsKt.getDpToPx(NativeMapExtensionsKt.getNonNullArray(map, "sizes").getDouble(i10));
        }
        int i11 = dpToPx;
        if (z5) {
            str2 = null;
        } else {
            ReadableMap map2 = readableArray.getMap(i5);
            Intrinsics.checkNotNull(map2);
            str2 = NativeMapExtensionsKt.getNonNullArray(map2, "keys").getString(i10);
        }
        return new FastestListSections.Entry.SectionItem(FastestListSections.Entry.SectionItem.INSTANCE.createKey(str, i5, i10, str2), FastestListSections.Section.m986constructorimpl(i5), FastestListSections.Item.m979constructorimpl(i10), i11, i10 == 0, i10 == i6 - 1, null);
    }

    @NotNull
    public static final FastestListSections.Versioned invoke(@NotNull FastestListSections.Versioned.Companion companion, @NotNull ReadableMap value) {
        ReadableArray readableArray;
        Integer num;
        ReadableArray readableArray2;
        Integer num2;
        ReadableArray readableArray3;
        FastestListSections.Entry.ListHeader listHeader;
        Integer num3;
        ReadableArray readableArray4;
        Intrinsics.checkNotNullParameter(companion, "<this>");
        Intrinsics.checkNotNullParameter(value, "value");
        String nonNullString = NativeMapExtensionsKt.getNonNullString(value, "listId");
        boolean z5 = value.getBoolean("keysAreUniform");
        ArrayList arrayList = new ArrayList();
        Ref.IntRef intRef = new Ref.IntRef();
        ArrayList arrayList2 = new ArrayList();
        List<Integer> intList = NativeArrayExtensionsKt.toIntList(NativeMapExtensionsKt.getNonNullArray(value, "sections"));
        String nonNullString2 = NativeMapExtensionsKt.getNonNullString(value, "sectionsId");
        ReadableArray nonNullArray = NativeMapExtensionsKt.getNonNullArray(value, "itemKeys");
        ReadableArray nonNullArray2 = NativeMapExtensionsKt.getNonNullArray(value, "itemSizes");
        if (value.getBoolean("itemSizeIsUniform")) {
            ReadableMap map = nonNullArray2.getMap(0);
            Intrinsics.checkNotNull(map);
            readableArray = nonNullArray;
            num = Integer.valueOf(SizeUtilsKt.getDpToPx(NativeMapExtensionsKt.getNonNullArray(map, "sizes").getDouble(0)));
        } else {
            readableArray = nonNullArray;
            num = null;
        }
        ReadableArray nonNullArray3 = NativeMapExtensionsKt.getNonNullArray(value, "sectionHeaderKeys");
        ReadableArray nonNullArray4 = NativeMapExtensionsKt.getNonNullArray(value, "sectionHeaderSizes");
        Integer valueOf = value.getBoolean("sectionHeaderSizeIsUniform") ? Integer.valueOf(SizeUtilsKt.getDpToPx(nonNullArray4.getDouble(0))) : null;
        ReadableArray nonNullArray5 = NativeMapExtensionsKt.getNonNullArray(value, "sectionFooterKeys");
        ReadableArray nonNullArray6 = NativeMapExtensionsKt.getNonNullArray(value, "sectionFooterSizes");
        Integer valueOf2 = value.getBoolean("sectionFooterSizeIsUniform") ? Integer.valueOf(SizeUtilsKt.getDpToPx(nonNullArray6.getDouble(0))) : null;
        boolean z6 = z5;
        String nonNullString3 = NativeMapExtensionsKt.getNonNullString(value, "listHeaderKey");
        ReadableArray readableArray5 = nonNullArray3;
        int dpToPx = SizeUtilsKt.getDpToPx(value.getDouble("listHeaderSize"));
        if (dpToPx > 0) {
            readableArray2 = nonNullArray6;
            num2 = valueOf;
            readableArray3 = nonNullArray4;
            listHeader = new FastestListSections.Entry.ListHeader(FastestListSections.Entry.ListHeader.INSTANCE.createKey(nonNullString, nonNullString3), FastestListSections.Section.m986constructorimpl(0), dpToPx, null);
        } else {
            readableArray2 = nonNullArray6;
            num2 = valueOf;
            readableArray3 = nonNullArray4;
            listHeader = null;
        }
        String nonNullString4 = NativeMapExtensionsKt.getNonNullString(value, "listFooterKey");
        int dpToPx2 = SizeUtilsKt.getDpToPx(value.getDouble("listFooterSize"));
        FastestListSections.Entry.ListFooter listFooter = dpToPx2 > 0 ? new FastestListSections.Entry.ListFooter(FastestListSections.Entry.ListFooter.INSTANCE.createKey(nonNullString, nonNullString4), FastestListSections.Section.m986constructorimpl(Math.max(0, c0.f(intList))), dpToPx2, null) : null;
        int i5 = 0;
        while (i5 <= c0.f(intList)) {
            if (i5 == 0) {
                invoke$lambda$0(arrayList2, arrayList, intRef, listHeader);
            }
            int intValue = intList.get(i5).intValue();
            if (intValue == 0) {
                if (i5 == c0.f(intList)) {
                    invoke$lambda$0(arrayList2, arrayList, intRef, listFooter);
                }
                i5++;
            } else {
                FastestListSections.Entry.ListHeader listHeader2 = listHeader;
                Integer num4 = num;
                boolean z7 = z6;
                Integer num5 = num2;
                int i6 = intValue;
                ReadableArray readableArray6 = readableArray5;
                ReadableArray readableArray7 = nonNullArray2;
                invoke$lambda$0(arrayList2, arrayList, intRef, createSectionHeader(nonNullString, z7, i5, readableArray6, num5, readableArray3));
                int i10 = 0;
                while (i10 < i6) {
                    int i11 = i6;
                    ReadableArray readableArray8 = readableArray;
                    Integer num6 = num4;
                    invoke$lambda$0(arrayList2, arrayList, intRef, createSectionItem(nonNullString, z7, i5, i11, i10, readableArray8, num6, readableArray7));
                    i10++;
                    readableArray = readableArray8;
                    num4 = num6;
                    i6 = i11;
                }
                Integer num7 = num4;
                int i12 = i6;
                ReadableArray readableArray9 = readableArray;
                if (i10 == i12) {
                    num3 = valueOf2;
                    readableArray4 = nonNullArray5;
                    invoke$lambda$0(arrayList2, arrayList, intRef, createSectionFooter(nonNullString, z7, i5, readableArray4, num3, readableArray2));
                    if (i5 == c0.f(intList)) {
                        invoke$lambda$0(arrayList2, arrayList, intRef, listFooter);
                    }
                } else {
                    num3 = valueOf2;
                    readableArray4 = nonNullArray5;
                }
                i5++;
                z6 = z7;
                nonNullArray5 = readableArray4;
                valueOf2 = num3;
                readableArray = readableArray9;
                num = num7;
                listHeader = listHeader2;
                nonNullArray2 = readableArray7;
                readableArray5 = readableArray6;
                num2 = num5;
            }
        }
        return new FastestListSections.Versioned(nonNullString2, arrayList2, intRef.element, arrayList);
    }

    private static final Unit invoke$lambda$0(List list, List list2, Ref.IntRef intRef, FastestListSections.Entry entry) {
        if (entry != null) {
            list.add(entry);
            list2.add(Integer.valueOf(intRef.element));
            intRef.element = entry.getSize() + intRef.element;
        }
        return Unit.a;
    }
}
