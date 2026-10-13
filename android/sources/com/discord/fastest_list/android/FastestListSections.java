package com.discord.fastest_list.android;

import a3.e;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.uimanager.ViewProps;
import fo.n;
import java.util.Iterator;
import java.util.List;
import k0.d;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.collections.r0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.ranges.IntRange;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\f\b\u0000\u0018\u0000 '2\u00020\u0001:\u0005#$%&'B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0006\u0010\u000e\u001a\u00020\u0007J\u0006\u0010\u000f\u001a\u00020\fJ\u0006\u0010\u0010\u001a\u00020\fJ\u000e\u0010\u0011\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\fJ\u0016\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0012\u001a\u00020\f2\u0006\u0010\u0015\u001a\u00020\u0016J\u000e\u0010\u0017\u001a\u00020\f2\u0006\u0010\u0018\u001a\u00020\fJ\u001f\u0010\u0017\u001a\u0004\u0018\u00010\f2\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001c¢\u0006\u0004\b\u001d\u0010\u001eJ\u0006\u0010\u001f\u001a\u00020\fJ\u000e\u0010 \u001a\u00020\n2\u0006\u0010\u0012\u001a\u00020\fJ\u000e\u0010!\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\fJ\u000e\u0010\"\u001a\u00020\u00162\u0006\u0010\u0002\u001a\u00020\u0003R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\fX\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\r\u001a\b\u0012\u0004\u0012\u00020\f0\tX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006("}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections;", "", "sectionsVersioned", "Lcom/discord/fastest_list/android/FastestListSections$Versioned;", "<init>", "(Lcom/discord/fastest_list/android/FastestListSections$Versioned;)V", "sectionsId", "", "sectionEntries", "", "Lcom/discord/fastest_list/android/FastestListSections$Entry;", "sectionsCumulativeSize", "", "sectionOffsetAtPosition", "getId", "getItemCumulativeSize", "getItemCount", "getItemViewType", ViewProps.POSITION, "getItemAtPosition", "Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionItem;", "atEnd", "", "getItemPosition", "offset", "section", "Lcom/discord/fastest_list/android/FastestListSections$Section;", "item", "Lcom/discord/fastest_list/android/FastestListSections$Item;", "getItemPosition-jEcWkE0", "(II)Ljava/lang/Integer;", "getItemSizeAverage", "getItem", "getItemOffset", "setSectionsVersioned", "Section", "Item", "Entry", "Versioned", "Companion", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nFastestListSections.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FastestListSections.kt\ncom/discord/fastest_list/android/FastestListSections\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,236:1\n1#2:237\n360#3,7:238\n*S KotlinDebug\n*F\n+ 1 FastestListSections.kt\ncom/discord/fastest_list/android/FastestListSections\n*L\n65#1:238,7\n*E\n"})
/* loaded from: classes.dex */
public final class FastestListSections {
    public static final int VIEW_TYPE_ITEM = 0;
    public static final int VIEW_TYPE_LIST_FOOTER = 4;
    public static final int VIEW_TYPE_LIST_HEADER = 3;
    public static final int VIEW_TYPE_SECTION_FOOTER = 2;
    public static final int VIEW_TYPE_SECTION_HEADER = 1;

    @NotNull
    private List<? extends Entry> sectionEntries;

    @NotNull
    private List<Integer> sectionOffsetAtPosition;
    private int sectionsCumulativeSize;

    @NotNull
    private String sectionsId;

    @Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b6\u0018\u00002\u00020\u0001:\u0005\u000f\u0010\u0011\u0012\u0013B\t\b\u0004¢\u0006\u0004\b\u0002\u0010\u0003R\u0012\u0010\u0004\u001a\u00020\u0005X¦\u0004¢\u0006\u0006\u001a\u0004\b\u0006\u0010\u0007R\u0012\u0010\b\u001a\u00020\tX¦\u0004¢\u0006\u0006\u001a\u0004\b\n\u0010\u000bR\u0012\u0010\f\u001a\u00020\rX¦\u0004¢\u0006\u0006\u001a\u0004\b\u000e\u0010\u000b\u0082\u0001\u0005\u0014\u0015\u0016\u0017\u0018¨\u0006\u0019"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Entry;", "", "<init>", "()V", "key", "", "getKey", "()Ljava/lang/String;", "size", "", "getSize", "()I", "section", "Lcom/discord/fastest_list/android/FastestListSections$Section;", "getSection-sZRFyWU", "ListHeader", "ListFooter", "SectionFooter", "SectionHeader", "SectionItem", "Lcom/discord/fastest_list/android/FastestListSections$Entry$ListFooter;", "Lcom/discord/fastest_list/android/FastestListSections$Entry$ListHeader;", "Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionFooter;", "Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionHeader;", "Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionItem;", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static abstract class Entry {

        @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0004\b\u0086\b\u0018\u0000 \u001d2\u00020\u0001:\u0001\u001dB\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\t\u0010\u0010\u001a\u00020\u0003HÆ\u0003J\u0010\u0010\u0011\u001a\u00020\u0005HÆ\u0003¢\u0006\u0004\b\u0012\u0010\rJ\t\u0010\u0013\u001a\u00020\u0007HÆ\u0003J.\u0010\u0014\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u0007HÆ\u0001¢\u0006\u0004\b\u0015\u0010\u0016J\u0013\u0010\u0017\u001a\u00020\u00182\b\u0010\u0019\u001a\u0004\u0018\u00010\u001aHÖ\u0003J\t\u0010\u001b\u001a\u00020\u0007HÖ\u0001J\t\u0010\u001c\u001a\u00020\u0003HÖ\u0001R\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0016\u0010\u0004\u001a\u00020\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010\u000e\u001a\u0004\b\f\u0010\rR\u0014\u0010\u0006\u001a\u00020\u0007X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\r¨\u0006\u001e"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Entry$ListFooter;", "Lcom/discord/fastest_list/android/FastestListSections$Entry;", "key", "", "section", "Lcom/discord/fastest_list/android/FastestListSections$Section;", "size", "", "<init>", "(Ljava/lang/String;IILkotlin/jvm/internal/DefaultConstructorMarker;)V", "getKey", "()Ljava/lang/String;", "getSection-sZRFyWU", "()I", "I", "getSize", "component1", "component2", "component2-sZRFyWU", "component3", "copy", "copy-X8oRnOs", "(Ljava/lang/String;II)Lcom/discord/fastest_list/android/FastestListSections$Entry$ListFooter;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "Companion", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class ListFooter extends Entry {

            /* renamed from: Companion, reason: from kotlin metadata */
            @NotNull
            public static final Companion INSTANCE = new Companion(null);

            @NotNull
            private final String key;
            private final int section;
            private final int size;

            @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0005¨\u0006\b"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Entry$ListFooter$Companion;", "", "<init>", "()V", "createKey", "", "listId", "customKey", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
            @SourceDebugExtension({"SMAP\nFastestListSections.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FastestListSections.kt\ncom/discord/fastest_list/android/FastestListSections$Entry$ListFooter$Companion\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,236:1\n1#2:237\n*E\n"})
            public static final class Companion {
                public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                    this();
                }

                @NotNull
                public final String createKey(@NotNull String listId, @NotNull String customKey) {
                    Intrinsics.checkNotNullParameter(listId, "listId");
                    Intrinsics.checkNotNullParameter(customKey, "customKey");
                    if (StringsKt.K(customKey)) {
                        customKey = "lf";
                    }
                    return listId + "-" + ((Object) customKey);
                }

                private Companion() {
                }
            }

            public /* synthetic */ ListFooter(String str, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
                this(str, i5, i6);
            }

            /* renamed from: copy-X8oRnOs$default, reason: not valid java name */
            public static /* synthetic */ ListFooter m961copyX8oRnOs$default(ListFooter listFooter, String str, int i5, int i6, int i10, Object obj) {
                if ((i10 & 1) != 0) {
                    str = listFooter.key;
                }
                if ((i10 & 2) != 0) {
                    i5 = listFooter.section;
                }
                if ((i10 & 4) != 0) {
                    i6 = listFooter.size;
                }
                return listFooter.m963copyX8oRnOs(str, i5, i6);
            }

            @NotNull
            /* renamed from: component1, reason: from getter */
            public final String getKey() {
                return this.key;
            }

            /* renamed from: component2-sZRFyWU, reason: not valid java name and from getter */
            public final int getSection() {
                return this.section;
            }

            /* renamed from: component3, reason: from getter */
            public final int getSize() {
                return this.size;
            }

            @NotNull
            /* renamed from: copy-X8oRnOs, reason: not valid java name */
            public final ListFooter m963copyX8oRnOs(@NotNull String key, int section, int size) {
                Intrinsics.checkNotNullParameter(key, "key");
                return new ListFooter(key, section, size, null);
            }

            public boolean equals(Object other) {
                if (this == other) {
                    return true;
                }
                if (!(other instanceof ListFooter)) {
                    return false;
                }
                ListFooter listFooter = (ListFooter) other;
                return Intrinsics.areEqual(this.key, listFooter.key) && Section.m988equalsimpl0(this.section, listFooter.section) && this.size == listFooter.size;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            @NotNull
            public String getKey() {
                return this.key;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            /* renamed from: getSection-sZRFyWU */
            public int mo960getSectionsZRFyWU() {
                return this.section;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            public int getSize() {
                return this.size;
            }

            public int hashCode() {
                return Integer.hashCode(this.size) + ((Section.m989hashCodeimpl(this.section) + (this.key.hashCode() * 31)) * 31);
            }

            @NotNull
            public String toString() {
                String str = this.key;
                String m990toStringimpl = Section.m990toStringimpl(this.section);
                return d.m(e.t("ListFooter(key=", str, ", section=", m990toStringimpl, ", size="), this.size, ")");
            }

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            private ListFooter(String key, int i5, int i6) {
                super(null);
                Intrinsics.checkNotNullParameter(key, "key");
                this.key = key;
                this.section = i5;
                this.size = i6;
            }
        }

        @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0004\b\u0086\b\u0018\u0000 \u001d2\u00020\u0001:\u0001\u001dB\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\t\u0010\u0010\u001a\u00020\u0003HÆ\u0003J\u0010\u0010\u0011\u001a\u00020\u0005HÆ\u0003¢\u0006\u0004\b\u0012\u0010\rJ\t\u0010\u0013\u001a\u00020\u0007HÆ\u0003J.\u0010\u0014\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u0007HÆ\u0001¢\u0006\u0004\b\u0015\u0010\u0016J\u0013\u0010\u0017\u001a\u00020\u00182\b\u0010\u0019\u001a\u0004\u0018\u00010\u001aHÖ\u0003J\t\u0010\u001b\u001a\u00020\u0007HÖ\u0001J\t\u0010\u001c\u001a\u00020\u0003HÖ\u0001R\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0016\u0010\u0004\u001a\u00020\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010\u000e\u001a\u0004\b\f\u0010\rR\u0014\u0010\u0006\u001a\u00020\u0007X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\r¨\u0006\u001e"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Entry$ListHeader;", "Lcom/discord/fastest_list/android/FastestListSections$Entry;", "key", "", "section", "Lcom/discord/fastest_list/android/FastestListSections$Section;", "size", "", "<init>", "(Ljava/lang/String;IILkotlin/jvm/internal/DefaultConstructorMarker;)V", "getKey", "()Ljava/lang/String;", "getSection-sZRFyWU", "()I", "I", "getSize", "component1", "component2", "component2-sZRFyWU", "component3", "copy", "copy-X8oRnOs", "(Ljava/lang/String;II)Lcom/discord/fastest_list/android/FastestListSections$Entry$ListHeader;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "Companion", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class ListHeader extends Entry {

            /* renamed from: Companion, reason: from kotlin metadata */
            @NotNull
            public static final Companion INSTANCE = new Companion(null);

            @NotNull
            private final String key;
            private final int section;
            private final int size;

            @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0005¨\u0006\b"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Entry$ListHeader$Companion;", "", "<init>", "()V", "createKey", "", "listId", "customKey", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
            @SourceDebugExtension({"SMAP\nFastestListSections.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FastestListSections.kt\ncom/discord/fastest_list/android/FastestListSections$Entry$ListHeader$Companion\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,236:1\n1#2:237\n*E\n"})
            public static final class Companion {
                public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                    this();
                }

                @NotNull
                public final String createKey(@NotNull String listId, @NotNull String customKey) {
                    Intrinsics.checkNotNullParameter(listId, "listId");
                    Intrinsics.checkNotNullParameter(customKey, "customKey");
                    if (StringsKt.K(customKey)) {
                        customKey = "lh";
                    }
                    return listId + "-" + ((Object) customKey);
                }

                private Companion() {
                }
            }

            public /* synthetic */ ListHeader(String str, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
                this(str, i5, i6);
            }

            /* renamed from: copy-X8oRnOs$default, reason: not valid java name */
            public static /* synthetic */ ListHeader m964copyX8oRnOs$default(ListHeader listHeader, String str, int i5, int i6, int i10, Object obj) {
                if ((i10 & 1) != 0) {
                    str = listHeader.key;
                }
                if ((i10 & 2) != 0) {
                    i5 = listHeader.section;
                }
                if ((i10 & 4) != 0) {
                    i6 = listHeader.size;
                }
                return listHeader.m966copyX8oRnOs(str, i5, i6);
            }

            @NotNull
            /* renamed from: component1, reason: from getter */
            public final String getKey() {
                return this.key;
            }

            /* renamed from: component2-sZRFyWU, reason: not valid java name and from getter */
            public final int getSection() {
                return this.section;
            }

            /* renamed from: component3, reason: from getter */
            public final int getSize() {
                return this.size;
            }

            @NotNull
            /* renamed from: copy-X8oRnOs, reason: not valid java name */
            public final ListHeader m966copyX8oRnOs(@NotNull String key, int section, int size) {
                Intrinsics.checkNotNullParameter(key, "key");
                return new ListHeader(key, section, size, null);
            }

            public boolean equals(Object other) {
                if (this == other) {
                    return true;
                }
                if (!(other instanceof ListHeader)) {
                    return false;
                }
                ListHeader listHeader = (ListHeader) other;
                return Intrinsics.areEqual(this.key, listHeader.key) && Section.m988equalsimpl0(this.section, listHeader.section) && this.size == listHeader.size;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            @NotNull
            public String getKey() {
                return this.key;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            /* renamed from: getSection-sZRFyWU */
            public int mo960getSectionsZRFyWU() {
                return this.section;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            public int getSize() {
                return this.size;
            }

            public int hashCode() {
                return Integer.hashCode(this.size) + ((Section.m989hashCodeimpl(this.section) + (this.key.hashCode() * 31)) * 31);
            }

            @NotNull
            public String toString() {
                String str = this.key;
                String m990toStringimpl = Section.m990toStringimpl(this.section);
                return d.m(e.t("ListHeader(key=", str, ", section=", m990toStringimpl, ", size="), this.size, ")");
            }

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            private ListHeader(String key, int i5, int i6) {
                super(null);
                Intrinsics.checkNotNullParameter(key, "key");
                this.key = key;
                this.section = i5;
                this.size = i6;
            }
        }

        @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0004\b\u0086\b\u0018\u0000 \u001d2\u00020\u0001:\u0001\u001dB\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\t\u0010\u0010\u001a\u00020\u0003HÆ\u0003J\u0010\u0010\u0011\u001a\u00020\u0005HÆ\u0003¢\u0006\u0004\b\u0012\u0010\rJ\t\u0010\u0013\u001a\u00020\u0007HÆ\u0003J.\u0010\u0014\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u0007HÆ\u0001¢\u0006\u0004\b\u0015\u0010\u0016J\u0013\u0010\u0017\u001a\u00020\u00182\b\u0010\u0019\u001a\u0004\u0018\u00010\u001aHÖ\u0003J\t\u0010\u001b\u001a\u00020\u0007HÖ\u0001J\t\u0010\u001c\u001a\u00020\u0003HÖ\u0001R\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0016\u0010\u0004\u001a\u00020\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010\u000e\u001a\u0004\b\f\u0010\rR\u0014\u0010\u0006\u001a\u00020\u0007X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\r¨\u0006\u001e"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionFooter;", "Lcom/discord/fastest_list/android/FastestListSections$Entry;", "key", "", "section", "Lcom/discord/fastest_list/android/FastestListSections$Section;", "size", "", "<init>", "(Ljava/lang/String;IILkotlin/jvm/internal/DefaultConstructorMarker;)V", "getKey", "()Ljava/lang/String;", "getSection-sZRFyWU", "()I", "I", "getSize", "component1", "component2", "component2-sZRFyWU", "component3", "copy", "copy-X8oRnOs", "(Ljava/lang/String;II)Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionFooter;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "Companion", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class SectionFooter extends Entry {

            /* renamed from: Companion, reason: from kotlin metadata */
            @NotNull
            public static final Companion INSTANCE = new Companion(null);

            @NotNull
            private final String key;
            private final int section;
            private final int size;

            @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J \u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\b2\b\u0010\t\u001a\u0004\u0018\u00010\u0005¨\u0006\n"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionFooter$Companion;", "", "<init>", "()V", "createKey", "", "listId", "sectionIndex", "", "sectionFooterKey", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
            public static final class Companion {
                public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                    this();
                }

                @NotNull
                public final String createKey(@NotNull String listId, int sectionIndex, String sectionFooterKey) {
                    Intrinsics.checkNotNullParameter(listId, "listId");
                    if (sectionFooterKey != null && !StringsKt.K(sectionFooterKey)) {
                        return d.l(listId, "-", sectionFooterKey);
                    }
                    return listId + "-sf" + sectionIndex;
                }

                private Companion() {
                }
            }

            public /* synthetic */ SectionFooter(String str, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
                this(str, i5, i6);
            }

            /* renamed from: copy-X8oRnOs$default, reason: not valid java name */
            public static /* synthetic */ SectionFooter m967copyX8oRnOs$default(SectionFooter sectionFooter, String str, int i5, int i6, int i10, Object obj) {
                if ((i10 & 1) != 0) {
                    str = sectionFooter.key;
                }
                if ((i10 & 2) != 0) {
                    i5 = sectionFooter.section;
                }
                if ((i10 & 4) != 0) {
                    i6 = sectionFooter.size;
                }
                return sectionFooter.m969copyX8oRnOs(str, i5, i6);
            }

            @NotNull
            /* renamed from: component1, reason: from getter */
            public final String getKey() {
                return this.key;
            }

            /* renamed from: component2-sZRFyWU, reason: not valid java name and from getter */
            public final int getSection() {
                return this.section;
            }

            /* renamed from: component3, reason: from getter */
            public final int getSize() {
                return this.size;
            }

            @NotNull
            /* renamed from: copy-X8oRnOs, reason: not valid java name */
            public final SectionFooter m969copyX8oRnOs(@NotNull String key, int section, int size) {
                Intrinsics.checkNotNullParameter(key, "key");
                return new SectionFooter(key, section, size, null);
            }

            public boolean equals(Object other) {
                if (this == other) {
                    return true;
                }
                if (!(other instanceof SectionFooter)) {
                    return false;
                }
                SectionFooter sectionFooter = (SectionFooter) other;
                return Intrinsics.areEqual(this.key, sectionFooter.key) && Section.m988equalsimpl0(this.section, sectionFooter.section) && this.size == sectionFooter.size;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            @NotNull
            public String getKey() {
                return this.key;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            /* renamed from: getSection-sZRFyWU */
            public int mo960getSectionsZRFyWU() {
                return this.section;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            public int getSize() {
                return this.size;
            }

            public int hashCode() {
                return Integer.hashCode(this.size) + ((Section.m989hashCodeimpl(this.section) + (this.key.hashCode() * 31)) * 31);
            }

            @NotNull
            public String toString() {
                String str = this.key;
                String m990toStringimpl = Section.m990toStringimpl(this.section);
                return d.m(e.t("SectionFooter(key=", str, ", section=", m990toStringimpl, ", size="), this.size, ")");
            }

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            private SectionFooter(String key, int i5, int i6) {
                super(null);
                Intrinsics.checkNotNullParameter(key, "key");
                this.key = key;
                this.section = i5;
                this.size = i6;
            }
        }

        @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0004\b\u0086\b\u0018\u0000 \u001d2\u00020\u0001:\u0001\u001dB\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\t\u0010\u0010\u001a\u00020\u0003HÆ\u0003J\u0010\u0010\u0011\u001a\u00020\u0005HÆ\u0003¢\u0006\u0004\b\u0012\u0010\rJ\t\u0010\u0013\u001a\u00020\u0007HÆ\u0003J.\u0010\u0014\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u0007HÆ\u0001¢\u0006\u0004\b\u0015\u0010\u0016J\u0013\u0010\u0017\u001a\u00020\u00182\b\u0010\u0019\u001a\u0004\u0018\u00010\u001aHÖ\u0003J\t\u0010\u001b\u001a\u00020\u0007HÖ\u0001J\t\u0010\u001c\u001a\u00020\u0003HÖ\u0001R\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0016\u0010\u0004\u001a\u00020\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010\u000e\u001a\u0004\b\f\u0010\rR\u0014\u0010\u0006\u001a\u00020\u0007X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\r¨\u0006\u001e"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionHeader;", "Lcom/discord/fastest_list/android/FastestListSections$Entry;", "key", "", "section", "Lcom/discord/fastest_list/android/FastestListSections$Section;", "size", "", "<init>", "(Ljava/lang/String;IILkotlin/jvm/internal/DefaultConstructorMarker;)V", "getKey", "()Ljava/lang/String;", "getSection-sZRFyWU", "()I", "I", "getSize", "component1", "component2", "component2-sZRFyWU", "component3", "copy", "copy-X8oRnOs", "(Ljava/lang/String;II)Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionHeader;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "Companion", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class SectionHeader extends Entry {

            /* renamed from: Companion, reason: from kotlin metadata */
            @NotNull
            public static final Companion INSTANCE = new Companion(null);

            @NotNull
            private final String key;
            private final int section;
            private final int size;

            @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J \u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\b2\b\u0010\t\u001a\u0004\u0018\u00010\u0005¨\u0006\n"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionHeader$Companion;", "", "<init>", "()V", "createKey", "", "listId", "sectionIndex", "", "sectionHeaderKey", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
            public static final class Companion {
                public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                    this();
                }

                @NotNull
                public final String createKey(@NotNull String listId, int sectionIndex, String sectionHeaderKey) {
                    Intrinsics.checkNotNullParameter(listId, "listId");
                    if (sectionHeaderKey != null && !StringsKt.K(sectionHeaderKey)) {
                        return d.l(listId, "-", sectionHeaderKey);
                    }
                    return listId + "-sh" + sectionIndex;
                }

                private Companion() {
                }
            }

            public /* synthetic */ SectionHeader(String str, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
                this(str, i5, i6);
            }

            /* renamed from: copy-X8oRnOs$default, reason: not valid java name */
            public static /* synthetic */ SectionHeader m970copyX8oRnOs$default(SectionHeader sectionHeader, String str, int i5, int i6, int i10, Object obj) {
                if ((i10 & 1) != 0) {
                    str = sectionHeader.key;
                }
                if ((i10 & 2) != 0) {
                    i5 = sectionHeader.section;
                }
                if ((i10 & 4) != 0) {
                    i6 = sectionHeader.size;
                }
                return sectionHeader.m972copyX8oRnOs(str, i5, i6);
            }

            @NotNull
            /* renamed from: component1, reason: from getter */
            public final String getKey() {
                return this.key;
            }

            /* renamed from: component2-sZRFyWU, reason: not valid java name and from getter */
            public final int getSection() {
                return this.section;
            }

            /* renamed from: component3, reason: from getter */
            public final int getSize() {
                return this.size;
            }

            @NotNull
            /* renamed from: copy-X8oRnOs, reason: not valid java name */
            public final SectionHeader m972copyX8oRnOs(@NotNull String key, int section, int size) {
                Intrinsics.checkNotNullParameter(key, "key");
                return new SectionHeader(key, section, size, null);
            }

            public boolean equals(Object other) {
                if (this == other) {
                    return true;
                }
                if (!(other instanceof SectionHeader)) {
                    return false;
                }
                SectionHeader sectionHeader = (SectionHeader) other;
                return Intrinsics.areEqual(this.key, sectionHeader.key) && Section.m988equalsimpl0(this.section, sectionHeader.section) && this.size == sectionHeader.size;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            @NotNull
            public String getKey() {
                return this.key;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            /* renamed from: getSection-sZRFyWU */
            public int mo960getSectionsZRFyWU() {
                return this.section;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            public int getSize() {
                return this.size;
            }

            public int hashCode() {
                return Integer.hashCode(this.size) + ((Section.m989hashCodeimpl(this.section) + (this.key.hashCode() * 31)) * 31);
            }

            @NotNull
            public String toString() {
                String str = this.key;
                String m990toStringimpl = Section.m990toStringimpl(this.section);
                return d.m(e.t("SectionHeader(key=", str, ", section=", m990toStringimpl, ", size="), this.size, ")");
            }

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            private SectionHeader(String key, int i5, int i6) {
                super(null);
                Intrinsics.checkNotNullParameter(key, "key");
                this.key = key;
                this.section = i5;
                this.size = i6;
            }
        }

        @Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u001a\n\u0002\u0010\u0000\n\u0002\b\u0004\b\u0086\b\u0018\u0000 )2\u00020\u0001:\u0001)BA\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007\u0012\b\b\u0002\u0010\b\u001a\u00020\t\u0012\b\b\u0002\u0010\n\u001a\u00020\u000b\u0012\b\b\u0002\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\t\u0010\u0019\u001a\u00020\u0003HÆ\u0003J\u0010\u0010\u001a\u001a\u00020\u0005HÆ\u0003¢\u0006\u0004\b\u001b\u0010\u0012J\u0010\u0010\u001c\u001a\u00020\u0007HÆ\u0003¢\u0006\u0004\b\u001d\u0010\u0012J\t\u0010\u001e\u001a\u00020\tHÆ\u0003J\t\u0010\u001f\u001a\u00020\u000bHÆ\u0003J\t\u0010 \u001a\u00020\u000bHÆ\u0003JL\u0010!\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u000b2\b\b\u0002\u0010\f\u001a\u00020\u000bHÆ\u0001¢\u0006\u0004\b\"\u0010#J\u0013\u0010$\u001a\u00020\u000b2\b\u0010%\u001a\u0004\u0018\u00010&HÖ\u0003J\t\u0010'\u001a\u00020\tHÖ\u0001J\t\u0010(\u001a\u00020\u0003HÖ\u0001R\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0016\u0010\u0004\u001a\u00020\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010\u0013\u001a\u0004\b\u0011\u0010\u0012R\u0013\u0010\u0006\u001a\u00020\u0007¢\u0006\n\n\u0002\u0010\u0013\u001a\u0004\b\u0014\u0010\u0012R\u0014\u0010\b\u001a\u00020\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0012R\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017R\u0011\u0010\f\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0017¨\u0006*"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionItem;", "Lcom/discord/fastest_list/android/FastestListSections$Entry;", "key", "", "section", "Lcom/discord/fastest_list/android/FastestListSections$Section;", "item", "Lcom/discord/fastest_list/android/FastestListSections$Item;", "size", "", "atFront", "", "atRear", "<init>", "(Ljava/lang/String;IIIZZLkotlin/jvm/internal/DefaultConstructorMarker;)V", "getKey", "()Ljava/lang/String;", "getSection-sZRFyWU", "()I", "I", "getItem-JXkbwXs", "getSize", "getAtFront", "()Z", "getAtRear", "component1", "component2", "component2-sZRFyWU", "component3", "component3-JXkbwXs", "component4", "component5", "component6", "copy", "copy-84MWo2c", "(Ljava/lang/String;IIIZZ)Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionItem;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "Companion", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class SectionItem extends Entry {

            /* renamed from: Companion, reason: from kotlin metadata */
            @NotNull
            public static final Companion INSTANCE = new Companion(null);

            @NotNull
            private static final SectionItem DEFAULT_AT_END;

            @NotNull
            private static final SectionItem DEFAULT_AT_START;
            private final boolean atFront;
            private final boolean atRear;
            private final int item;

            @NotNull
            private final String key;
            private final int section;
            private final int size;

            @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0007\u001a\u00020\u00052\u0006\u0010\b\u001a\u00020\tJ(\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\u000b2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u000e2\b\u0010\u0010\u001a\u0004\u0018\u00010\u000bR\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionItem$Companion;", "", "<init>", "()V", "DEFAULT_AT_START", "Lcom/discord/fastest_list/android/FastestListSections$Entry$SectionItem;", "DEFAULT_AT_END", "getDefaultItem", "atEnd", "", "createKey", "", "listId", "sectionIndex", "", "sectionItemIndex", "sectionItemKey", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
            public static final class Companion {
                public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                    this();
                }

                @NotNull
                public final String createKey(@NotNull String listId, int sectionIndex, int sectionItemIndex, String sectionItemKey) {
                    Intrinsics.checkNotNullParameter(listId, "listId");
                    if (sectionItemKey != null && !StringsKt.K(sectionItemKey)) {
                        return d.l(listId, "-", sectionItemKey);
                    }
                    return listId + "-s" + sectionIndex + "-i" + sectionItemIndex;
                }

                @NotNull
                public final SectionItem getDefaultItem(boolean atEnd) {
                    return atEnd ? SectionItem.DEFAULT_AT_END : SectionItem.DEFAULT_AT_START;
                }

                private Companion() {
                }
            }

            /* JADX WARN: Multi-variable type inference failed */
            static {
                boolean z5 = false;
                DEFAULT_AT_START = new SectionItem("", 0, Item.m979constructorimpl(0), 0, false, z5, 58, null);
                DEFAULT_AT_END = new SectionItem("", 0, Item.m979constructorimpl(-1), 0 == true ? 1 : 0, z5, false, 58, null);
            }

            public /* synthetic */ SectionItem(String str, int i5, int i6, int i10, boolean z5, boolean z6, DefaultConstructorMarker defaultConstructorMarker) {
                this(str, i5, i6, i10, z5, z6);
            }

            /* renamed from: copy-84MWo2c$default, reason: not valid java name */
            public static /* synthetic */ SectionItem m973copy84MWo2c$default(SectionItem sectionItem, String str, int i5, int i6, int i10, boolean z5, boolean z6, int i11, Object obj) {
                if ((i11 & 1) != 0) {
                    str = sectionItem.key;
                }
                if ((i11 & 2) != 0) {
                    i5 = sectionItem.section;
                }
                if ((i11 & 4) != 0) {
                    i6 = sectionItem.item;
                }
                if ((i11 & 8) != 0) {
                    i10 = sectionItem.size;
                }
                if ((i11 & 16) != 0) {
                    z5 = sectionItem.atFront;
                }
                if ((i11 & 32) != 0) {
                    z6 = sectionItem.atRear;
                }
                boolean z7 = z5;
                boolean z8 = z6;
                return sectionItem.m976copy84MWo2c(str, i5, i6, i10, z7, z8);
            }

            @NotNull
            /* renamed from: component1, reason: from getter */
            public final String getKey() {
                return this.key;
            }

            /* renamed from: component2-sZRFyWU, reason: not valid java name and from getter */
            public final int getSection() {
                return this.section;
            }

            /* renamed from: component3-JXkbwXs, reason: not valid java name and from getter */
            public final int getItem() {
                return this.item;
            }

            /* renamed from: component4, reason: from getter */
            public final int getSize() {
                return this.size;
            }

            /* renamed from: component5, reason: from getter */
            public final boolean getAtFront() {
                return this.atFront;
            }

            /* renamed from: component6, reason: from getter */
            public final boolean getAtRear() {
                return this.atRear;
            }

            @NotNull
            /* renamed from: copy-84MWo2c, reason: not valid java name */
            public final SectionItem m976copy84MWo2c(@NotNull String key, int section, int item, int size, boolean atFront, boolean atRear) {
                Intrinsics.checkNotNullParameter(key, "key");
                return new SectionItem(key, section, item, size, atFront, atRear, null);
            }

            public boolean equals(Object other) {
                if (this == other) {
                    return true;
                }
                if (!(other instanceof SectionItem)) {
                    return false;
                }
                SectionItem sectionItem = (SectionItem) other;
                return Intrinsics.areEqual(this.key, sectionItem.key) && Section.m988equalsimpl0(this.section, sectionItem.section) && Item.m981equalsimpl0(this.item, sectionItem.item) && this.size == sectionItem.size && this.atFront == sectionItem.atFront && this.atRear == sectionItem.atRear;
            }

            public final boolean getAtFront() {
                return this.atFront;
            }

            public final boolean getAtRear() {
                return this.atRear;
            }

            /* renamed from: getItem-JXkbwXs, reason: not valid java name */
            public final int m977getItemJXkbwXs() {
                return this.item;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            @NotNull
            public String getKey() {
                return this.key;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            /* renamed from: getSection-sZRFyWU */
            public int mo960getSectionsZRFyWU() {
                return this.section;
            }

            @Override // com.discord.fastest_list.android.FastestListSections.Entry
            public int getSize() {
                return this.size;
            }

            public int hashCode() {
                return Boolean.hashCode(this.atRear) + d.d(com.discord.chat.bridge.botuikit.a.u(this.size, (Item.m982hashCodeimpl(this.item) + ((Section.m989hashCodeimpl(this.section) + (this.key.hashCode() * 31)) * 31)) * 31, 31), 31, this.atFront);
            }

            @NotNull
            public String toString() {
                String str = this.key;
                String m990toStringimpl = Section.m990toStringimpl(this.section);
                String m983toStringimpl = Item.m983toStringimpl(this.item);
                int i5 = this.size;
                boolean z5 = this.atFront;
                boolean z6 = this.atRear;
                StringBuilder t5 = e.t("SectionItem(key=", str, ", section=", m990toStringimpl, ", item=");
                t5.append(m983toStringimpl);
                t5.append(", size=");
                t5.append(i5);
                t5.append(", atFront=");
                t5.append(z5);
                t5.append(", atRear=");
                t5.append(z6);
                t5.append(")");
                return t5.toString();
            }

            public /* synthetic */ SectionItem(String str, int i5, int i6, int i10, boolean z5, boolean z6, int i11, DefaultConstructorMarker defaultConstructorMarker) {
                this(str, (i11 & 2) != 0 ? Section.m986constructorimpl(0) : i5, (i11 & 4) != 0 ? Item.m979constructorimpl(0) : i6, (i11 & 8) != 0 ? 0 : i10, (i11 & 16) != 0 ? false : z5, (i11 & 32) != 0 ? false : z6, null);
            }

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            private SectionItem(String key, int i5, int i6, int i10, boolean z5, boolean z6) {
                super(null);
                Intrinsics.checkNotNullParameter(key, "key");
                this.key = key;
                this.section = i5;
                this.item = i6;
                this.size = i10;
                this.atFront = z5;
                this.atRear = z6;
            }
        }

        public /* synthetic */ Entry(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public abstract String getKey();

        /* renamed from: getSection-sZRFyWU, reason: not valid java name */
        public abstract int mo960getSectionsZRFyWU();

        public abstract int getSize();

        private Entry() {
        }
    }

    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0087@\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u001a\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u0001HÖ\u0003¢\u0006\u0004\b\u000b\u0010\fJ\u0010\u0010\r\u001a\u00020\u0003HÖ\u0001¢\u0006\u0004\b\u000e\u0010\u0005J\u0010\u0010\u000f\u001a\u00020\u0010HÖ\u0001¢\u0006\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u0088\u0001\u0002¨\u0006\u0013"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Item;", "", "value", "", "constructor-impl", "(I)I", "getValue", "()I", "equals", "", JankRecordStore.SCREEN_OTHER, "equals-impl", "(ILjava/lang/Object;)Z", "hashCode", "hashCode-impl", "toString", "", "toString-impl", "(I)Ljava/lang/String;", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Item {
        private final int value;

        private /* synthetic */ Item(int i5) {
            this.value = i5;
        }

        /* renamed from: box-impl, reason: not valid java name */
        public static final /* synthetic */ Item m978boximpl(int i5) {
            return new Item(i5);
        }

        /* renamed from: constructor-impl, reason: not valid java name */
        public static int m979constructorimpl(int i5) {
            return i5;
        }

        /* renamed from: equals-impl, reason: not valid java name */
        public static boolean m980equalsimpl(int i5, Object obj) {
            return (obj instanceof Item) && i5 == ((Item) obj).m984unboximpl();
        }

        /* renamed from: equals-impl0, reason: not valid java name */
        public static final boolean m981equalsimpl0(int i5, int i6) {
            return i5 == i6;
        }

        /* renamed from: hashCode-impl, reason: not valid java name */
        public static int m982hashCodeimpl(int i5) {
            return Integer.hashCode(i5);
        }

        /* renamed from: toString-impl, reason: not valid java name */
        public static String m983toStringimpl(int i5) {
            return h.e(i5, "Item(value=", ")");
        }

        public boolean equals(Object obj) {
            return m980equalsimpl(this.value, obj);
        }

        public final int getValue() {
            return this.value;
        }

        public int hashCode() {
            return m982hashCodeimpl(this.value);
        }

        public String toString() {
            return m983toStringimpl(this.value);
        }

        /* renamed from: unbox-impl, reason: not valid java name */
        public final /* synthetic */ int m984unboximpl() {
            return this.value;
        }
    }

    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0087@\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u001a\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u0001HÖ\u0003¢\u0006\u0004\b\u000b\u0010\fJ\u0010\u0010\r\u001a\u00020\u0003HÖ\u0001¢\u0006\u0004\b\u000e\u0010\u0005J\u0010\u0010\u000f\u001a\u00020\u0010HÖ\u0001¢\u0006\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u0088\u0001\u0002¨\u0006\u0013"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Section;", "", "value", "", "constructor-impl", "(I)I", "getValue", "()I", "equals", "", JankRecordStore.SCREEN_OTHER, "equals-impl", "(ILjava/lang/Object;)Z", "hashCode", "hashCode-impl", "toString", "", "toString-impl", "(I)Ljava/lang/String;", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Section {
        private final int value;

        private /* synthetic */ Section(int i5) {
            this.value = i5;
        }

        /* renamed from: box-impl, reason: not valid java name */
        public static final /* synthetic */ Section m985boximpl(int i5) {
            return new Section(i5);
        }

        /* renamed from: constructor-impl, reason: not valid java name */
        public static int m986constructorimpl(int i5) {
            return i5;
        }

        /* renamed from: equals-impl, reason: not valid java name */
        public static boolean m987equalsimpl(int i5, Object obj) {
            return (obj instanceof Section) && i5 == ((Section) obj).m991unboximpl();
        }

        /* renamed from: equals-impl0, reason: not valid java name */
        public static final boolean m988equalsimpl0(int i5, int i6) {
            return i5 == i6;
        }

        /* renamed from: hashCode-impl, reason: not valid java name */
        public static int m989hashCodeimpl(int i5) {
            return Integer.hashCode(i5);
        }

        /* renamed from: toString-impl, reason: not valid java name */
        public static String m990toStringimpl(int i5) {
            return h.e(i5, "Section(value=", ")");
        }

        public boolean equals(Object obj) {
            return m987equalsimpl(this.value, obj);
        }

        public final int getValue() {
            return this.value;
        }

        public int hashCode() {
            return m989hashCodeimpl(this.value);
        }

        public String toString() {
            return m990toStringimpl(this.value);
        }

        /* renamed from: unbox-impl, reason: not valid java name */
        public final /* synthetic */ int m991unboximpl() {
            return this.value;
        }
    }

    @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0002\b\u0005\b\u0086\b\u0018\u0000 \u001d2\u00020\u0001:\u0001\u001dB3\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\f\u0010\t\u001a\b\u0012\u0004\u0012\u00020\b0\u0005¢\u0006\u0004\b\n\u0010\u000bJ\t\u0010\u0013\u001a\u00020\u0003HÆ\u0003J\u000f\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005HÆ\u0003J\t\u0010\u0015\u001a\u00020\bHÆ\u0003J\u000f\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\b0\u0005HÆ\u0003J=\u0010\u0017\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\u000e\b\u0002\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u00052\b\b\u0002\u0010\u0007\u001a\u00020\b2\u000e\b\u0002\u0010\t\u001a\b\u0012\u0004\u0012\u00020\b0\u0005HÆ\u0001J\u0013\u0010\u0018\u001a\u00020\u00192\b\u0010\u001a\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001b\u001a\u00020\bHÖ\u0001J\t\u0010\u001c\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0017\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0017\u0010\t\u001a\b\u0012\u0004\u0012\u00020\b0\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u000f¨\u0006\u001e"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Versioned;", "", "sectionsId", "", "sectionEntries", "", "Lcom/discord/fastest_list/android/FastestListSections$Entry;", "sectionsCumulativeSize", "", "sectionOffsetAtPosition", "<init>", "(Ljava/lang/String;Ljava/util/List;ILjava/util/List;)V", "getSectionsId", "()Ljava/lang/String;", "getSectionEntries", "()Ljava/util/List;", "getSectionsCumulativeSize", "()I", "getSectionOffsetAtPosition", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "Companion", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class Versioned {

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE = new Companion(null);

        @NotNull
        private final List<Entry> sectionEntries;

        @NotNull
        private final List<Integer> sectionOffsetAtPosition;
        private final int sectionsCumulativeSize;

        @NotNull
        private final String sectionsId;

        @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/discord/fastest_list/android/FastestListSections$Versioned$Companion;", "", "<init>", "()V", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            private Companion() {
            }
        }

        /* JADX WARN: Multi-variable type inference failed */
        public Versioned(@NotNull String sectionsId, @NotNull List<? extends Entry> sectionEntries, int i5, @NotNull List<Integer> sectionOffsetAtPosition) {
            Intrinsics.checkNotNullParameter(sectionsId, "sectionsId");
            Intrinsics.checkNotNullParameter(sectionEntries, "sectionEntries");
            Intrinsics.checkNotNullParameter(sectionOffsetAtPosition, "sectionOffsetAtPosition");
            this.sectionsId = sectionsId;
            this.sectionEntries = sectionEntries;
            this.sectionsCumulativeSize = i5;
            this.sectionOffsetAtPosition = sectionOffsetAtPosition;
        }

        /* JADX WARN: Multi-variable type inference failed */
        public static /* synthetic */ Versioned copy$default(Versioned versioned, String str, List list, int i5, List list2, int i6, Object obj) {
            if ((i6 & 1) != 0) {
                str = versioned.sectionsId;
            }
            if ((i6 & 2) != 0) {
                list = versioned.sectionEntries;
            }
            if ((i6 & 4) != 0) {
                i5 = versioned.sectionsCumulativeSize;
            }
            if ((i6 & 8) != 0) {
                list2 = versioned.sectionOffsetAtPosition;
            }
            return versioned.copy(str, list, i5, list2);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final String getSectionsId() {
            return this.sectionsId;
        }

        @NotNull
        public final List<Entry> component2() {
            return this.sectionEntries;
        }

        /* renamed from: component3, reason: from getter */
        public final int getSectionsCumulativeSize() {
            return this.sectionsCumulativeSize;
        }

        @NotNull
        public final List<Integer> component4() {
            return this.sectionOffsetAtPosition;
        }

        @NotNull
        public final Versioned copy(@NotNull String sectionsId, @NotNull List<? extends Entry> sectionEntries, int sectionsCumulativeSize, @NotNull List<Integer> sectionOffsetAtPosition) {
            Intrinsics.checkNotNullParameter(sectionsId, "sectionsId");
            Intrinsics.checkNotNullParameter(sectionEntries, "sectionEntries");
            Intrinsics.checkNotNullParameter(sectionOffsetAtPosition, "sectionOffsetAtPosition");
            return new Versioned(sectionsId, sectionEntries, sectionsCumulativeSize, sectionOffsetAtPosition);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof Versioned)) {
                return false;
            }
            Versioned versioned = (Versioned) other;
            return Intrinsics.areEqual(this.sectionsId, versioned.sectionsId) && Intrinsics.areEqual(this.sectionEntries, versioned.sectionEntries) && this.sectionsCumulativeSize == versioned.sectionsCumulativeSize && Intrinsics.areEqual(this.sectionOffsetAtPosition, versioned.sectionOffsetAtPosition);
        }

        @NotNull
        public final List<Entry> getSectionEntries() {
            return this.sectionEntries;
        }

        @NotNull
        public final List<Integer> getSectionOffsetAtPosition() {
            return this.sectionOffsetAtPosition;
        }

        public final int getSectionsCumulativeSize() {
            return this.sectionsCumulativeSize;
        }

        @NotNull
        public final String getSectionsId() {
            return this.sectionsId;
        }

        public int hashCode() {
            return this.sectionOffsetAtPosition.hashCode() + com.discord.chat.bridge.botuikit.a.u(this.sectionsCumulativeSize, e.e(this.sectionEntries, this.sectionsId.hashCode() * 31, 31), 31);
        }

        @NotNull
        public String toString() {
            return "Versioned(sectionsId=" + this.sectionsId + ", sectionEntries=" + this.sectionEntries + ", sectionsCumulativeSize=" + this.sectionsCumulativeSize + ", sectionOffsetAtPosition=" + this.sectionOffsetAtPosition + ")";
        }
    }

    public FastestListSections(@NotNull Versioned sectionsVersioned) {
        Intrinsics.checkNotNullParameter(sectionsVersioned, "sectionsVersioned");
        this.sectionsId = sectionsVersioned.getSectionsId();
        this.sectionEntries = sectionsVersioned.getSectionEntries();
        this.sectionsCumulativeSize = sectionsVersioned.getSectionsCumulativeSize();
        this.sectionOffsetAtPosition = sectionsVersioned.getSectionOffsetAtPosition();
    }

    @NotNull
    /* renamed from: getId, reason: from getter */
    public final String getSectionsId() {
        return this.sectionsId;
    }

    @NotNull
    public final Entry getItem(int position) {
        return this.sectionEntries.get(position);
    }

    @NotNull
    public final Entry.SectionItem getItemAtPosition(int position, boolean atEnd) {
        Entry entry = this.sectionEntries.get(position);
        Entry.SectionItem sectionItem = null;
        if (entry instanceof Entry.ListHeader) {
            Iterator it = c0.e(this.sectionEntries).iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                Entry entry2 = this.sectionEntries.get(((r0) it).nextInt());
                Entry.SectionItem sectionItem2 = entry2 instanceof Entry.SectionItem ? (Entry.SectionItem) entry2 : null;
                if (sectionItem2 != null) {
                    sectionItem = sectionItem2;
                    break;
                }
            }
            return sectionItem == null ? Entry.SectionItem.INSTANCE.getDefaultItem(atEnd) : sectionItem;
        }
        if (!(entry instanceof Entry.ListFooter)) {
            if (entry instanceof Entry.SectionHeader) {
                Entry entry3 = this.sectionEntries.get(position + 1);
                Intrinsics.checkNotNull(entry3, "null cannot be cast to non-null type com.discord.fastest_list.android.FastestListSections.Entry.SectionItem");
                return (Entry.SectionItem) entry3;
            }
            if (entry instanceof Entry.SectionFooter) {
                Entry entry4 = this.sectionEntries.get(position - 1);
                Intrinsics.checkNotNull(entry4, "null cannot be cast to non-null type com.discord.fastest_list.android.FastestListSections.Entry.SectionItem");
                return (Entry.SectionItem) entry4;
            }
            if (entry instanceof Entry.SectionItem) {
                return (Entry.SectionItem) entry;
            }
            throw new n();
        }
        IntRange e9 = c0.e(this.sectionEntries);
        Intrinsics.checkNotNullParameter(e9, "<this>");
        yo.a aVar = kotlin.ranges.a.f13544v;
        int i5 = e9.f13546e;
        int i6 = e9.f13545d;
        int i10 = -e9.f13547i;
        aVar.getClass();
        Iterator it2 = new kotlin.ranges.a(i5, i6, i10).iterator();
        while (true) {
            if (!it2.hasNext()) {
                break;
            }
            Entry entry5 = this.sectionEntries.get(((r0) it2).nextInt());
            Entry.SectionItem sectionItem3 = entry5 instanceof Entry.SectionItem ? (Entry.SectionItem) entry5 : null;
            if (sectionItem3 != null) {
                sectionItem = sectionItem3;
                break;
            }
        }
        return sectionItem == null ? Entry.SectionItem.INSTANCE.getDefaultItem(atEnd) : sectionItem;
    }

    public final int getItemCount() {
        return this.sectionEntries.size();
    }

    /* renamed from: getItemCumulativeSize, reason: from getter */
    public final int getSectionsCumulativeSize() {
        return this.sectionsCumulativeSize;
    }

    public final int getItemOffset(int position) {
        if (position < 0) {
            return 0;
        }
        if (position < this.sectionOffsetAtPosition.size()) {
            return this.sectionOffsetAtPosition.get(position).intValue();
        }
        if (this.sectionOffsetAtPosition.isEmpty()) {
            return 0;
        }
        return ((Number) CollectionsKt.Q(this.sectionOffsetAtPosition)).intValue();
    }

    public final int getItemPosition(int offset) {
        int size = this.sectionOffsetAtPosition.size();
        for (int i5 = 0; i5 < size; i5++) {
            if (offset <= this.sectionOffsetAtPosition.get(i5).intValue()) {
                return i5;
            }
        }
        throw new IllegalStateException(("Invalid offset " + offset + ", out of bounds of sections.").toString());
    }

    /* renamed from: getItemPosition-jEcWkE0, reason: not valid java name */
    public final Integer m959getItemPositionjEcWkE0(int section, int item) {
        Iterator<? extends Entry> it = this.sectionEntries.iterator();
        int i5 = 0;
        while (true) {
            if (!it.hasNext()) {
                i5 = -1;
                break;
            }
            Entry next = it.next();
            if (next instanceof Entry.SectionItem) {
                Entry.SectionItem sectionItem = (Entry.SectionItem) next;
                if (Item.m981equalsimpl0(sectionItem.m977getItemJXkbwXs(), item) && Section.m988equalsimpl0(sectionItem.mo960getSectionsZRFyWU(), section)) {
                    break;
                }
            }
            i5++;
        }
        if (i5 == -1) {
            return null;
        }
        return Integer.valueOf(i5);
    }

    public final int getItemSizeAverage() {
        if (this.sectionEntries.isEmpty()) {
            return 0;
        }
        return this.sectionsCumulativeSize / this.sectionEntries.size();
    }

    public final int getItemViewType(int position) {
        Entry entry = this.sectionEntries.get(position);
        if (entry instanceof Entry.SectionHeader) {
            return 1;
        }
        if (entry instanceof Entry.SectionFooter) {
            return 2;
        }
        if (entry instanceof Entry.SectionItem) {
            return 0;
        }
        if (entry instanceof Entry.ListFooter) {
            return 4;
        }
        if (entry instanceof Entry.ListHeader) {
            return 3;
        }
        throw new n();
    }

    public final boolean setSectionsVersioned(@NotNull Versioned sectionsVersioned) {
        Intrinsics.checkNotNullParameter(sectionsVersioned, "sectionsVersioned");
        if (Intrinsics.areEqual(this.sectionsId, sectionsVersioned.getSectionsId())) {
            return false;
        }
        this.sectionsId = sectionsVersioned.getSectionsId();
        this.sectionEntries = sectionsVersioned.getSectionEntries();
        this.sectionsCumulativeSize = sectionsVersioned.getSectionsCumulativeSize();
        this.sectionOffsetAtPosition = sectionsVersioned.getSectionOffsetAtPosition();
        return true;
    }
}
