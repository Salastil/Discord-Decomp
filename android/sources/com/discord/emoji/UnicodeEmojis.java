package com.discord.emoji;

import android.content.Context;
import bs.d;
import bs.h1;
import bs.v1;
import com.discord.chat.presentation.textutils.c;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import d9.a;
import fo.l;
import fo.m;
import java.util.List;
import java.util.Map;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.sync.Mutex;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonBuilder;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import wr.b;
import xr.e;

@Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\u00020\u0001:\u0002\u0013\u0014B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J(\u0010\r\u001a\u0014\u0012\u0004\u0012\u00020\n\u0012\n\u0012\b\u0012\u0004\u0012\u00020\f0\u000b0\t2\u0006\u0010\u000e\u001a\u00020\u000fH\u0086@¢\u0006\u0002\u0010\u0010J\u0016\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u000e\u001a\u00020\u000fH\u0082@¢\u0006\u0002\u0010\u0010R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R \u0010\b\u001a\u0014\u0012\u0004\u0012\u00020\n\u0012\n\u0012\b\u0012\u0004\u0012\u00020\f0\u000b0\tX\u0082.¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lcom/discord/emoji/UnicodeEmojis;", "", "<init>", "()V", "emojiJsonParser", "Lkotlinx/serialization/json/Json;", "emojiLoadingMutex", "Lkotlinx/coroutines/sync/Mutex;", "emojis", "", "", "", "Lcom/discord/emoji/UnicodeEmojis$Emoji;", "load", "context", "Landroid/content/Context;", "(Landroid/content/Context;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "loadData", "Lcom/discord/emoji/UnicodeEmojis$EmojiCategories;", "EmojiCategories", "Emoji", "emoji_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nUnicodeEmojis.kt\nKotlin\n*S Kotlin\n*F\n+ 1 UnicodeEmojis.kt\ncom/discord/emoji/UnicodeEmojis\n+ 2 Mutex.kt\nkotlinx/coroutines/sync/MutexKt\n*L\n1#1,68:1\n116#2,10:69\n*S KotlinDebug\n*F\n+ 1 UnicodeEmojis.kt\ncom/discord/emoji/UnicodeEmojis\n*L\n22#1:69,10\n*E\n"})
/* loaded from: classes.dex */
public final class UnicodeEmojis {

    @NotNull
    public static final UnicodeEmojis INSTANCE = new UnicodeEmojis();

    @NotNull
    private static final Json emojiJsonParser = a.c(new c(14));

    @NotNull
    private static final Mutex emojiLoadingMutex = new b();
    private static Map<String, ? extends List<Emoji>> emojis;

    @e
    @Metadata(d1 = {"\u0000B\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 \"2\u00020\u0001:\u0002!\"B\u001d\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0004¢\u0006\u0004\b\u0006\u0010\u0007B5\b\u0010\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u000e\u0010\u0002\u001a\n\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b¢\u0006\u0004\b\u0006\u0010\fJ\u000f\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0003J\t\u0010\u0012\u001a\u00020\u0004HÆ\u0003J#\u0010\u0013\u001a\u00020\u00002\u000e\b\u0002\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u0004HÆ\u0001J\u0013\u0010\u0014\u001a\u00020\u00152\b\u0010\u0016\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0017\u001a\u00020\tHÖ\u0001J\t\u0010\u0018\u001a\u00020\u0004HÖ\u0001J%\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u00002\u0006\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\u001fH\u0001¢\u0006\u0002\b R\u0017\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0005\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010¨\u0006#"}, d2 = {"Lcom/discord/emoji/UnicodeEmojis$Emoji;", "", "names", "", "", "surrogates", "<init>", "(Ljava/util/List;Ljava/lang/String;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/util/List;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getNames", "()Ljava/util/List;", "getSurrogates", "()Ljava/lang/String;", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$emoji_release", "$serializer", "Companion", "emoji_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class Emoji {

        @NotNull
        private final List<String> names;

        @NotNull
        private final String surrogates;

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE = new Companion(null);

        @NotNull
        private static final Lazy[] $childSerializers = {l.b(m.f8827e, new com.discord.chat.reactevents.a(6)), null};

        @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/emoji/UnicodeEmojis$Emoji$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/emoji/UnicodeEmojis$Emoji;", "emoji_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            private Companion() {
            }

            @NotNull
            public final KSerializer serializer() {
                return UnicodeEmojis$Emoji$$serializer.INSTANCE;
            }

            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }
        }

        public /* synthetic */ Emoji(int i5, List list, String str, SerializationConstructorMarker serializationConstructorMarker) {
            if (3 != (i5 & 3)) {
                h1.l(i5, 3, UnicodeEmojis$Emoji$$serializer.INSTANCE.getDescriptor());
                throw null;
            }
            this.names = list;
            this.surrogates = str;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
            return new d(v1.a, 0);
        }

        /* JADX WARN: Multi-variable type inference failed */
        public static /* synthetic */ Emoji copy$default(Emoji emoji, List list, String str, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                list = emoji.names;
            }
            if ((i5 & 2) != 0) {
                str = emoji.surrogates;
            }
            return emoji.copy(list, str);
        }

        public static final /* synthetic */ void write$Self$emoji_release(Emoji self, CompositeEncoder output, SerialDescriptor serialDesc) {
            output.g(serialDesc, 0, (KSerializer) $childSerializers[0].getValue(), self.names);
            output.y(serialDesc, 1, self.surrogates);
        }

        @NotNull
        public final List<String> component1() {
            return this.names;
        }

        @NotNull
        /* renamed from: component2, reason: from getter */
        public final String getSurrogates() {
            return this.surrogates;
        }

        @NotNull
        public final Emoji copy(@NotNull List<String> names, @NotNull String surrogates) {
            Intrinsics.checkNotNullParameter(names, "names");
            Intrinsics.checkNotNullParameter(surrogates, "surrogates");
            return new Emoji(names, surrogates);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof Emoji)) {
                return false;
            }
            Emoji emoji = (Emoji) other;
            return Intrinsics.areEqual(this.names, emoji.names) && Intrinsics.areEqual(this.surrogates, emoji.surrogates);
        }

        @NotNull
        public final List<String> getNames() {
            return this.names;
        }

        @NotNull
        public final String getSurrogates() {
            return this.surrogates;
        }

        public int hashCode() {
            return this.surrogates.hashCode() + (this.names.hashCode() * 31);
        }

        @NotNull
        public String toString() {
            return "Emoji(names=" + this.names + ", surrogates=" + this.surrogates + ")";
        }

        public Emoji(@NotNull List<String> names, @NotNull String surrogates) {
            Intrinsics.checkNotNullParameter(names, "names");
            Intrinsics.checkNotNullParameter(surrogates, "surrogates");
            this.names = names;
            this.surrogates = surrogates;
        }
    }

    @e
    @Metadata(d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 62\u00020\u0001:\u000256Bw\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\f\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\f\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\f\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\f\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\f\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\u0004\b\f\u0010\rB\u009b\u0001\b\u0010\u0012\u0006\u0010\u000e\u001a\u00020\u000f\u0012\u000e\u0010\u0002\u001a\n\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0003\u0012\u000e\u0010\u0005\u001a\n\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0003\u0012\u000e\u0010\u0006\u001a\n\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0003\u0012\u000e\u0010\u0007\u001a\n\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0003\u0012\u000e\u0010\b\u001a\n\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0003\u0012\u000e\u0010\t\u001a\n\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0003\u0012\u000e\u0010\n\u001a\n\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0003\u0012\u000e\u0010\u000b\u001a\n\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0003\u0012\b\u0010\u0010\u001a\u0004\u0018\u00010\u0011¢\u0006\u0004\b\f\u0010\u0012J\u0018\u0010\u001c\u001a\u0014\u0012\u0004\u0012\u00020\u001e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00040\u00030\u001dJ\u000f\u0010\u001f\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0003J\u000f\u0010 \u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0003J\u000f\u0010!\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0003J\u000f\u0010\"\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0003J\u000f\u0010#\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0003J\u000f\u0010$\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0003J\u000f\u0010%\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0003J\u000f\u0010&\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0003J\u0089\u0001\u0010'\u001a\u00020\u00002\u000e\b\u0002\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u000e\b\u0002\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u000e\b\u0002\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u000e\b\u0002\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u000e\b\u0002\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u000e\b\u0002\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u000e\b\u0002\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u000e\b\u0002\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0001J\u0013\u0010(\u001a\u00020)2\b\u0010*\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010+\u001a\u00020\u000fHÖ\u0001J\t\u0010,\u001a\u00020\u001eHÖ\u0001J%\u0010-\u001a\u00020.2\u0006\u0010/\u001a\u00020\u00002\u0006\u00100\u001a\u0002012\u0006\u00102\u001a\u000203H\u0001¢\u0006\u0002\b4R\u0017\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0017\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0014R\u0017\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0014R\u0017\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0014R\u0017\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0014R\u0017\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u0014R\u0017\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u0014R\u0017\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u0014¨\u00067"}, d2 = {"Lcom/discord/emoji/UnicodeEmojis$EmojiCategories;", "", "people", "", "Lcom/discord/emoji/UnicodeEmojis$Emoji;", "nature", "food", "activity", "travel", "objects", "symbols", "flags", "<init>", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getPeople", "()Ljava/util/List;", "getNature", "getFood", "getActivity", "getTravel", "getObjects", "getSymbols", "getFlags", "toMap", "", "", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$emoji_release", "$serializer", "Companion", "emoji_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class EmojiCategories {

        @NotNull
        private static final Lazy[] $childSerializers;

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE = new Companion(null);

        @NotNull
        private final List<Emoji> activity;

        @NotNull
        private final List<Emoji> flags;

        @NotNull
        private final List<Emoji> food;

        @NotNull
        private final List<Emoji> nature;

        @NotNull
        private final List<Emoji> objects;

        @NotNull
        private final List<Emoji> people;

        @NotNull
        private final List<Emoji> symbols;

        @NotNull
        private final List<Emoji> travel;

        @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/emoji/UnicodeEmojis$EmojiCategories$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/emoji/UnicodeEmojis$EmojiCategories;", "emoji_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            private Companion() {
            }

            @NotNull
            public final KSerializer serializer() {
                return UnicodeEmojis$EmojiCategories$$serializer.INSTANCE;
            }

            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }
        }

        static {
            m mVar = m.f8827e;
            $childSerializers = new Lazy[]{l.b(mVar, new com.discord.chat.reactevents.a(7)), l.b(mVar, new com.discord.chat.reactevents.a(8)), l.b(mVar, new com.discord.chat.reactevents.a(9)), l.b(mVar, new com.discord.chat.reactevents.a(10)), l.b(mVar, new com.discord.chat.reactevents.a(11)), l.b(mVar, new com.discord.chat.reactevents.a(12)), l.b(mVar, new com.discord.chat.reactevents.a(13)), l.b(mVar, new com.discord.chat.reactevents.a(14))};
        }

        public /* synthetic */ EmojiCategories(int i5, List list, List list2, List list3, List list4, List list5, List list6, List list7, List list8, SerializationConstructorMarker serializationConstructorMarker) {
            if (255 != (i5 & 255)) {
                h1.l(i5, 255, UnicodeEmojis$EmojiCategories$$serializer.INSTANCE.getDescriptor());
                throw null;
            }
            this.people = list;
            this.nature = list2;
            this.food = list3;
            this.activity = list4;
            this.travel = list5;
            this.objects = list6;
            this.symbols = list7;
            this.flags = list8;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
            return new d(UnicodeEmojis$Emoji$$serializer.INSTANCE, 0);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$0() {
            return new d(UnicodeEmojis$Emoji$$serializer.INSTANCE, 0);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$1() {
            return new d(UnicodeEmojis$Emoji$$serializer.INSTANCE, 0);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$2() {
            return new d(UnicodeEmojis$Emoji$$serializer.INSTANCE, 0);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$3() {
            return new d(UnicodeEmojis$Emoji$$serializer.INSTANCE, 0);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$4() {
            return new d(UnicodeEmojis$Emoji$$serializer.INSTANCE, 0);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$5() {
            return new d(UnicodeEmojis$Emoji$$serializer.INSTANCE, 0);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$6() {
            return new d(UnicodeEmojis$Emoji$$serializer.INSTANCE, 0);
        }

        public static /* synthetic */ EmojiCategories copy$default(EmojiCategories emojiCategories, List list, List list2, List list3, List list4, List list5, List list6, List list7, List list8, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                list = emojiCategories.people;
            }
            if ((i5 & 2) != 0) {
                list2 = emojiCategories.nature;
            }
            if ((i5 & 4) != 0) {
                list3 = emojiCategories.food;
            }
            if ((i5 & 8) != 0) {
                list4 = emojiCategories.activity;
            }
            if ((i5 & 16) != 0) {
                list5 = emojiCategories.travel;
            }
            if ((i5 & 32) != 0) {
                list6 = emojiCategories.objects;
            }
            if ((i5 & 64) != 0) {
                list7 = emojiCategories.symbols;
            }
            if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
                list8 = emojiCategories.flags;
            }
            List list9 = list7;
            List list10 = list8;
            List list11 = list5;
            List list12 = list6;
            return emojiCategories.copy(list, list2, list3, list4, list11, list12, list9, list10);
        }

        public static final /* synthetic */ void write$Self$emoji_release(EmojiCategories self, CompositeEncoder output, SerialDescriptor serialDesc) {
            Lazy[] lazyArr = $childSerializers;
            output.g(serialDesc, 0, (KSerializer) lazyArr[0].getValue(), self.people);
            output.g(serialDesc, 1, (KSerializer) lazyArr[1].getValue(), self.nature);
            output.g(serialDesc, 2, (KSerializer) lazyArr[2].getValue(), self.food);
            output.g(serialDesc, 3, (KSerializer) lazyArr[3].getValue(), self.activity);
            output.g(serialDesc, 4, (KSerializer) lazyArr[4].getValue(), self.travel);
            output.g(serialDesc, 5, (KSerializer) lazyArr[5].getValue(), self.objects);
            output.g(serialDesc, 6, (KSerializer) lazyArr[6].getValue(), self.symbols);
            output.g(serialDesc, 7, (KSerializer) lazyArr[7].getValue(), self.flags);
        }

        @NotNull
        public final List<Emoji> component1() {
            return this.people;
        }

        @NotNull
        public final List<Emoji> component2() {
            return this.nature;
        }

        @NotNull
        public final List<Emoji> component3() {
            return this.food;
        }

        @NotNull
        public final List<Emoji> component4() {
            return this.activity;
        }

        @NotNull
        public final List<Emoji> component5() {
            return this.travel;
        }

        @NotNull
        public final List<Emoji> component6() {
            return this.objects;
        }

        @NotNull
        public final List<Emoji> component7() {
            return this.symbols;
        }

        @NotNull
        public final List<Emoji> component8() {
            return this.flags;
        }

        @NotNull
        public final EmojiCategories copy(@NotNull List<Emoji> people, @NotNull List<Emoji> nature, @NotNull List<Emoji> food, @NotNull List<Emoji> activity, @NotNull List<Emoji> travel, @NotNull List<Emoji> objects, @NotNull List<Emoji> symbols, @NotNull List<Emoji> flags) {
            Intrinsics.checkNotNullParameter(people, "people");
            Intrinsics.checkNotNullParameter(nature, "nature");
            Intrinsics.checkNotNullParameter(food, "food");
            Intrinsics.checkNotNullParameter(activity, "activity");
            Intrinsics.checkNotNullParameter(travel, "travel");
            Intrinsics.checkNotNullParameter(objects, "objects");
            Intrinsics.checkNotNullParameter(symbols, "symbols");
            Intrinsics.checkNotNullParameter(flags, "flags");
            return new EmojiCategories(people, nature, food, activity, travel, objects, symbols, flags);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof EmojiCategories)) {
                return false;
            }
            EmojiCategories emojiCategories = (EmojiCategories) other;
            return Intrinsics.areEqual(this.people, emojiCategories.people) && Intrinsics.areEqual(this.nature, emojiCategories.nature) && Intrinsics.areEqual(this.food, emojiCategories.food) && Intrinsics.areEqual(this.activity, emojiCategories.activity) && Intrinsics.areEqual(this.travel, emojiCategories.travel) && Intrinsics.areEqual(this.objects, emojiCategories.objects) && Intrinsics.areEqual(this.symbols, emojiCategories.symbols) && Intrinsics.areEqual(this.flags, emojiCategories.flags);
        }

        @NotNull
        public final List<Emoji> getActivity() {
            return this.activity;
        }

        @NotNull
        public final List<Emoji> getFlags() {
            return this.flags;
        }

        @NotNull
        public final List<Emoji> getFood() {
            return this.food;
        }

        @NotNull
        public final List<Emoji> getNature() {
            return this.nature;
        }

        @NotNull
        public final List<Emoji> getObjects() {
            return this.objects;
        }

        @NotNull
        public final List<Emoji> getPeople() {
            return this.people;
        }

        @NotNull
        public final List<Emoji> getSymbols() {
            return this.symbols;
        }

        @NotNull
        public final List<Emoji> getTravel() {
            return this.travel;
        }

        public int hashCode() {
            return this.flags.hashCode() + a3.e.e(this.symbols, a3.e.e(this.objects, a3.e.e(this.travel, a3.e.e(this.activity, a3.e.e(this.food, a3.e.e(this.nature, this.people.hashCode() * 31, 31), 31), 31), 31), 31), 31);
        }

        @NotNull
        public final Map<String, List<Emoji>> toMap() {
            return v0.g(new Pair("people", this.people), new Pair("nature", this.nature), new Pair("food", this.food), new Pair("activity", this.activity), new Pair("travel", this.travel), new Pair("objects", this.objects), new Pair("symbols", this.symbols), new Pair("flags", this.flags));
        }

        @NotNull
        public String toString() {
            return "EmojiCategories(people=" + this.people + ", nature=" + this.nature + ", food=" + this.food + ", activity=" + this.activity + ", travel=" + this.travel + ", objects=" + this.objects + ", symbols=" + this.symbols + ", flags=" + this.flags + ")";
        }

        public EmojiCategories(@NotNull List<Emoji> people, @NotNull List<Emoji> nature, @NotNull List<Emoji> food, @NotNull List<Emoji> activity, @NotNull List<Emoji> travel, @NotNull List<Emoji> objects, @NotNull List<Emoji> symbols, @NotNull List<Emoji> flags) {
            Intrinsics.checkNotNullParameter(people, "people");
            Intrinsics.checkNotNullParameter(nature, "nature");
            Intrinsics.checkNotNullParameter(food, "food");
            Intrinsics.checkNotNullParameter(activity, "activity");
            Intrinsics.checkNotNullParameter(travel, "travel");
            Intrinsics.checkNotNullParameter(objects, "objects");
            Intrinsics.checkNotNullParameter(symbols, "symbols");
            Intrinsics.checkNotNullParameter(flags, "flags");
            this.people = people;
            this.nature = nature;
            this.food = food;
            this.activity = activity;
            this.travel = travel;
            this.objects = objects;
            this.symbols = symbols;
            this.flags = flags;
        }
    }

    private UnicodeEmojis() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit emojiJsonParser$lambda$0(JsonBuilder Json) {
        Intrinsics.checkNotNullParameter(Json, "$this$Json");
        Json.f13609b = true;
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object loadData(Context context, Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(ur.d.f19093i, new UnicodeEmojis$loadData$2(context, null), continuation);
    }

    /* JADX WARN: Code restructure failed: missing block: B:40:0x0056, code lost:
    
        if (r9.a(r0) == r1) goto L27;
     */
    /* JADX WARN: Removed duplicated region for block: B:16:0x0082 A[Catch: all -> 0x002f, TRY_LEAVE, TryCatch #1 {all -> 0x002f, blocks: (B:12:0x002b, B:13:0x006f, B:14:0x007e, B:16:0x0082), top: B:11:0x002b }] */
    /* JADX WARN: Removed duplicated region for block: B:31:0x005d A[Catch: all -> 0x0078, TRY_LEAVE, TryCatch #0 {all -> 0x0078, blocks: (B:29:0x0059, B:31:0x005d), top: B:28:0x0059 }] */
    /* JADX WARN: Removed duplicated region for block: B:36:0x007d  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x0047  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0023  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object load(@NotNull Context context, @NotNull Continuation continuation) {
        UnicodeEmojis$load$1 unicodeEmojis$load$1;
        int i5;
        Mutex mutex;
        Throwable th2;
        Mutex mutex2;
        Map<String, ? extends List<Emoji>> map;
        try {
            if (continuation instanceof UnicodeEmojis$load$1) {
                unicodeEmojis$load$1 = (UnicodeEmojis$load$1) continuation;
                int i6 = unicodeEmojis$load$1.label;
                if ((i6 & Integer.MIN_VALUE) != 0) {
                    unicodeEmojis$load$1.label = i6 - Integer.MIN_VALUE;
                    Object obj = unicodeEmojis$load$1.result;
                    ko.a aVar = ko.a.f13464d;
                    i5 = unicodeEmojis$load$1.label;
                    if (i5 != 0) {
                        ki.b.R(obj);
                        mutex = emojiLoadingMutex;
                        unicodeEmojis$load$1.L$0 = context;
                        unicodeEmojis$load$1.L$1 = mutex;
                        unicodeEmojis$load$1.label = 1;
                    } else {
                        if (i5 != 1) {
                            if (i5 != 2) {
                                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                            }
                            mutex2 = (Mutex) unicodeEmojis$load$1.L$0;
                            try {
                                ki.b.R(obj);
                                emojis = ((EmojiCategories) obj).toMap();
                                map = emojis;
                                if (map == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("emojis");
                                    map = null;
                                }
                                mutex2.b(null);
                                return map;
                            } catch (Throwable th3) {
                                th2 = th3;
                                mutex2.b(null);
                                throw th2;
                            }
                        }
                        Mutex mutex3 = (Mutex) unicodeEmojis$load$1.L$1;
                        Context context2 = (Context) unicodeEmojis$load$1.L$0;
                        ki.b.R(obj);
                        mutex = mutex3;
                        context = context2;
                    }
                    if (emojis == null) {
                        mutex2 = mutex;
                        map = emojis;
                        if (map == null) {
                        }
                        mutex2.b(null);
                        return map;
                    }
                    UnicodeEmojis unicodeEmojis = INSTANCE;
                    unicodeEmojis$load$1.L$0 = mutex;
                    unicodeEmojis$load$1.L$1 = null;
                    unicodeEmojis$load$1.label = 2;
                    Object loadData = unicodeEmojis.loadData(context, unicodeEmojis$load$1);
                    if (loadData != aVar) {
                        Mutex mutex4 = mutex;
                        obj = loadData;
                        mutex2 = mutex4;
                        emojis = ((EmojiCategories) obj).toMap();
                        map = emojis;
                        if (map == null) {
                        }
                        mutex2.b(null);
                        return map;
                    }
                    return aVar;
                }
            }
            if (emojis == null) {
            }
        } catch (Throwable th4) {
            Mutex mutex5 = mutex;
            th2 = th4;
            mutex2 = mutex5;
            mutex2.b(null);
            throw th2;
        }
        unicodeEmojis$load$1 = new UnicodeEmojis$load$1(this, continuation);
        Object obj2 = unicodeEmojis$load$1.result;
        ko.a aVar2 = ko.a.f13464d;
        i5 = unicodeEmojis$load$1.label;
        if (i5 != 0) {
        }
    }
}
