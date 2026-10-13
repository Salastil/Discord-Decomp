package com.discord.emoji_picker;

import android.content.Context;
import com.discord.cache.Cache;
import com.discord.chat.presentation.message.view.m;
import com.discord.crash_reporting.CrashReporting;
import com.discord.emoji.UnicodeEmojis;
import com.discord.emoji_picker.EmojiPickerCache;
import com.discord.emoji_picker.EmojiPickerItem;
import com.discord.emoji_picker.EmojiPickerItemData;
import com.discord.kvstorage.discordapp.DiscordMobileApi;
import com.discord.misc.utilities.coroutines.CollectWithLeadingDebounceKt;
import com.discord.misc.utilities.ids.IdUtilsKt;
import com.discord.misc.utilities.threading.ThreadUtilsKt;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.devsupport.StackTraceHelper;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.collections.m0;
import kotlin.collections.r0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.flow.FlowCollector;
import kotlinx.coroutines.flow.MutableSharedFlow;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonBuilder;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonObject;
import lo.h;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import qr.y;
import yo.j;

@Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0006\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0000\u0018\u0000  2\u00020\u0001:\u0002\u001f B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\b\u0010\u0013\u001a\u00020\u0012H\u0007J\u0014\u0010\u0014\u001a\u00020\u00122\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u0005H\u0007J\u000e\u0010\u0016\u001a\u00020\u0012H\u0082@¢\u0006\u0002\u0010\u0017J\u000e\u0010\u0018\u001a\b\u0012\u0004\u0012\u00020\u001a0\u0019H\u0002J\u001c\u0010\u001b\u001a\b\u0012\u0004\u0012\u00020\u001a0\u00192\u0006\u0010\u001c\u001a\u00020\u001dH\u0082@¢\u0006\u0002\u0010\u001eR\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00030\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u000e\u001a\u0004\u0018\u00010\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00120\u0011X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006!"}, d2 = {"Lcom/discord/emoji_picker/EmojiPickerCache;", "", "listener", "Lcom/discord/emoji_picker/EmojiPickerCache$Listener;", "emojiCoreData", "Lcom/discord/emoji_picker/EmojiPickerItemData$CoreData;", "<init>", "(Lcom/discord/emoji_picker/EmojiPickerCache$Listener;Lcom/discord/emoji_picker/EmojiPickerItemData$CoreData;)V", "emojiPickerListener", "Ljava/lang/ref/WeakReference;", "emojiJsonConfig", "Lkotlinx/serialization/json/Json;", "emojiCoroutineScope", "Lkotlinx/coroutines/CoroutineScope;", "emojiFetchJob", "Lkotlinx/coroutines/Job;", "emojiFetchEvents", "Lkotlinx/coroutines/flow/MutableSharedFlow;", "", "invalidate", "refreshEmojis", "emojiCodeData", "refreshDatabaseEmojis", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "buildEmojis", "", "Lcom/discord/emoji_picker/EmojiPickerItem;", "buildEmojisUnicode", "context", "Landroid/content/Context;", "(Landroid/content/Context;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "Listener", "Companion", "emoji_picker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nEmojiPickerCache.kt\nKotlin\n*S Kotlin\n*F\n+ 1 EmojiPickerCache.kt\ncom/discord/emoji_picker/EmojiPickerCache\n+ 2 ThreadUtils.kt\ncom/discord/misc/utilities/threading/ThreadUtilsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 4 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,190:1\n25#2,8:191\n1#3:199\n1#3:212\n1878#4,2:200\n1617#4,9:202\n1869#4:211\n1870#4:213\n1626#4:214\n1056#4:215\n1869#4,2:216\n1880#4:218\n1878#4,2:219\n1869#4,2:221\n1880#4:223\n*S KotlinDebug\n*F\n+ 1 EmojiPickerCache.kt\ncom/discord/emoji_picker/EmojiPickerCache\n*L\n70#1:191,8\n109#1:212\n90#1:200,2\n109#1:202,9\n109#1:211\n109#1:213\n109#1:214\n132#1:215\n137#1:216,2\n90#1:218\n160#1:219,2\n162#1:221,2\n160#1:223\n*E\n"})
/* loaded from: classes.dex */
public final class EmojiPickerCache {
    private static final long DEBOUNCE_INTERVAL = 3000;

    @NotNull
    private EmojiPickerItemData.CoreData emojiCoreData;

    @NotNull
    private final CoroutineScope emojiCoroutineScope;

    @NotNull
    private final MutableSharedFlow emojiFetchEvents;
    private Job emojiFetchJob;

    @NotNull
    private final Json emojiJsonConfig;

    @NotNull
    private final WeakReference<Listener> emojiPickerListener;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @lo.d(c = "com.discord.emoji_picker.EmojiPickerCache$1", f = "EmojiPickerCache.kt", l = {42}, m = "invokeSuspend")
    /* renamed from: com.discord.emoji_picker.EmojiPickerCache$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        int label;

        public AnonymousClass1(Continuation continuation) {
            super(2, continuation);
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return EmojiPickerCache.this.new AnonymousClass1(continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 == 0) {
                ki.b.R(obj);
                MutableSharedFlow mutableSharedFlow = EmojiPickerCache.this.emojiFetchEvents;
                final EmojiPickerCache emojiPickerCache = EmojiPickerCache.this;
                FlowCollector flowCollector = new FlowCollector() { // from class: com.discord.emoji_picker.EmojiPickerCache.1.1
                    @Override // kotlinx.coroutines.flow.FlowCollector
                    public final Object emit(Unit unit, Continuation continuation) {
                        Object refreshDatabaseEmojis = EmojiPickerCache.this.refreshDatabaseEmojis(continuation);
                        return refreshDatabaseEmojis == ko.a.f13464d ? refreshDatabaseEmojis : Unit.a;
                    }
                };
                this.label = 1;
                if (CollectWithLeadingDebounceKt.collectWithLeadingDebounce(mutableSharedFlow, EmojiPickerCache.DEBOUNCE_INTERVAL, flowCollector, this) == aVar) {
                    return aVar;
                }
            } else {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
            }
            return Unit.a;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J$\u0010\u0002\u001a\u00020\u00032\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u00052\f\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005H'J\b\u0010\b\u001a\u00020\tH&¨\u0006\n"}, d2 = {"Lcom/discord/emoji_picker/EmojiPickerCache$Listener;", "", "onEmojisUpdated", "", "emojis", "", "Lcom/discord/emoji_picker/EmojiPickerItem;", "emojisUnicode", "onContext", "Landroid/content/Context;", "emoji_picker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public interface Listener {
        @NotNull
        Context onContext();

        void onEmojisUpdated(@NotNull List<? extends EmojiPickerItem> emojis, @NotNull List<? extends EmojiPickerItem> emojisUnicode);
    }

    public EmojiPickerCache(@NotNull Listener listener, @NotNull EmojiPickerItemData.CoreData emojiCoreData) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        Intrinsics.checkNotNullParameter(emojiCoreData, "emojiCoreData");
        this.emojiCoreData = emojiCoreData;
        this.emojiPickerListener = new WeakReference<>(listener);
        this.emojiJsonConfig = d9.a.c(new com.discord.chat.presentation.textutils.c(15));
        sr.d b10 = x.b(g0.a);
        this.emojiCoroutineScope = b10;
        this.emojiFetchEvents = y.a(0, 1, pr.a.f16467d);
        this.emojiFetchJob = x.t(b10, null, new AnonymousClass1(null), 3);
    }

    private final List<EmojiPickerItem> buildEmojis() {
        boolean z5;
        HashMap<String, ArrayList<String>> hashMap;
        boolean z6;
        List list;
        boolean z7;
        EmojiPickerItem.Emoji emoji;
        HashMap<String, ArrayList<String>> hashMap2;
        boolean z8;
        ArrayList arrayList;
        try {
            HashMap<String, ArrayList<String>> guildEmojis = DiscordMobileApi.getGuildEmojis(a3.e.k("@account.", Cache.INSTANCE.get().getItem("_userIdKey")));
            Collection<ArrayList<String>> values = guildEmojis.values();
            Intrinsics.checkNotNullExpressionValue(values, "<get-values>(...)");
            Iterator<T> it = values.iterator();
            int i5 = 0;
            while (true) {
                z5 = true;
                if (!it.hasNext()) {
                    break;
                }
                i5 += ((ArrayList) it.next()).size() + 1;
            }
            ArrayList arrayList2 = new ArrayList(i5);
            int i6 = 0;
            boolean z10 = false;
            for (Object obj : this.emojiCoreData.getNativeSectionsEmojis()) {
                int i10 = i6 + 1;
                if (i6 < 0) {
                    c0.k();
                    throw null;
                }
                EmojiPickerItemData.CoreData.NativeSection.Guild guild = (EmojiPickerItemData.CoreData.NativeSection.Guild) obj;
                if (guild.getHasPremiumInlineRoadblockHeader()) {
                    arrayList2.add(new EmojiPickerItem.PremiumInlineRoadblockHeader(a3.e.k("premium-inline-roadblock-header-", guild.getGuildId())));
                    z10 = z5;
                }
                arrayList2.add(new EmojiPickerItem.Category(guild.getGuildName(), Long.parseLong(guild.getGuildId()), z10));
                ArrayList<String> arrayList3 = guildEmojis.get(guild.getGuildId());
                if (arrayList3 != null) {
                    ArrayList arrayList4 = new ArrayList();
                    for (String str : arrayList3) {
                        Json json = this.emojiJsonConfig;
                        Intrinsics.checkNotNull(str);
                        JsonObject j = cs.h.j(json.d(str));
                        Object obj2 = j.get(StackTraceHelper.ID_KEY);
                        Intrinsics.checkNotNull(obj2);
                        long l6 = cs.h.l(cs.h.k((JsonElement) obj2));
                        if (guild.getEmojisHidden().contains(Long.valueOf(l6))) {
                            hashMap2 = guildEmojis;
                            z8 = z10;
                            arrayList = arrayList4;
                            emoji = null;
                        } else {
                            Object obj3 = j.get(StackTraceHelper.NAME_KEY);
                            Intrinsics.checkNotNull(obj3);
                            String a = cs.h.k((JsonElement) obj3).a();
                            Object obj4 = j.get("animated");
                            Intrinsics.checkNotNull(obj4);
                            hashMap2 = guildEmojis;
                            z8 = z10;
                            arrayList = arrayList4;
                            emoji = new EmojiPickerItem.Emoji(l6, a, cs.h.e(cs.h.k((JsonElement) obj4)), EmojiPickerItem.Emoji.DisabledType.INSTANCE.create(guild.getIsNitroLocked() || guild.getEmojisDisabled().contains(Long.valueOf(l6)), guild.getIsNitroLocked()), null, z8, 16, null);
                        }
                        if (emoji != null) {
                            arrayList.add(emoji);
                        }
                        arrayList4 = arrayList;
                        z10 = z8;
                        guildEmojis = hashMap2;
                    }
                    hashMap = guildEmojis;
                    z6 = z10;
                    list = CollectionsKt.e0(arrayList4, new Comparator() { // from class: com.discord.emoji_picker.EmojiPickerCache$buildEmojis$lambda$7$$inlined$sortedBy$1
                        /* JADX WARN: Multi-variable type inference failed */
                        @Override // java.util.Comparator
                        public final int compare(T t5, T t10) {
                            return ho.a.a(((EmojiPickerItem.Emoji) t5).getName(), ((EmojiPickerItem.Emoji) t10).getName());
                        }
                    });
                } else {
                    hashMap = guildEmojis;
                    z6 = z10;
                    list = null;
                }
                if (list != null) {
                    arrayList2.addAll(list);
                    z7 = false;
                } else {
                    z7 = false;
                    Iterator it2 = j.i(0, guild.getEmojiCount()).iterator();
                    while (((yo.b) it2).f20994i) {
                        arrayList2.add(new EmojiPickerItem.EmojiPlaceholder((i6 * 1000) + ((r0) it2).nextInt()));
                    }
                }
                if (guild.getHasPremiumInlineRoadblockFooter()) {
                    arrayList2.add(new EmojiPickerItem.PremiumInlineRoadblockFooter(a3.e.k("premium-inline-roadblock-footer-", guild.getGuildId())));
                    z10 = z7;
                } else {
                    z10 = z6;
                }
                i6 = i10;
                guildEmojis = hashMap;
                z5 = true;
            }
            return arrayList2;
        } catch (Exception e9) {
            CrashReporting.INSTANCE.captureMessage("Unable to read guild emojis from cache.", e9);
            return m0.f13512d;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0057 A[LOOP:0: B:11:0x0051->B:13:0x0057, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:18:0x007a  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0033  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object buildEmojisUnicode(Context context, Continuation continuation) {
        EmojiPickerCache$buildEmojisUnicode$1 emojiPickerCache$buildEmojisUnicode$1;
        int i5;
        Iterator it;
        Object obj;
        if (continuation instanceof EmojiPickerCache$buildEmojisUnicode$1) {
            emojiPickerCache$buildEmojisUnicode$1 = (EmojiPickerCache$buildEmojisUnicode$1) continuation;
            int i6 = emojiPickerCache$buildEmojisUnicode$1.label;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                emojiPickerCache$buildEmojisUnicode$1.label = i6 - Integer.MIN_VALUE;
                Object obj2 = emojiPickerCache$buildEmojisUnicode$1.result;
                ko.a aVar = ko.a.f13464d;
                i5 = emojiPickerCache$buildEmojisUnicode$1.label;
                if (i5 != 0) {
                    ki.b.R(obj2);
                    UnicodeEmojis unicodeEmojis = UnicodeEmojis.INSTANCE;
                    emojiPickerCache$buildEmojisUnicode$1.label = 1;
                    obj2 = unicodeEmojis.load(context, emojiPickerCache$buildEmojisUnicode$1);
                    if (obj2 == aVar) {
                        return aVar;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj2);
                }
                Map map = (Map) obj2;
                it = map.values().iterator();
                int i10 = 0;
                while (it.hasNext()) {
                    i10 += ((List) it.next()).size() + 1;
                }
                ArrayList arrayList = new ArrayList(i10);
                int i11 = 0;
                for (Object obj3 : this.emojiCoreData.getNativeSectionsEmojisUnicode()) {
                    int i12 = i11 + 1;
                    if (i11 < 0) {
                        c0.k();
                        throw null;
                    }
                    arrayList.add(new EmojiPickerItem.Category(((EmojiPickerItemData.CoreData.NativeSection.Unicode) obj3).getTitle(), 0L, false, 6, null));
                    Set keySet = map.keySet();
                    Intrinsics.checkNotNullParameter(keySet, "<this>");
                    boolean z5 = keySet instanceof List;
                    if (z5) {
                        obj = ((List) keySet).get(i11);
                    } else {
                        m defaultValue = new m(i11, 1);
                        Intrinsics.checkNotNullParameter(keySet, "<this>");
                        Intrinsics.checkNotNullParameter(defaultValue, "defaultValue");
                        if (!z5) {
                            if (i11 < 0) {
                                defaultValue.invoke(Integer.valueOf(i11));
                                throw null;
                            }
                            int i13 = 0;
                            for (Object obj4 : keySet) {
                                int i14 = i13 + 1;
                                if (i11 == i13) {
                                    obj = obj4;
                                } else {
                                    i13 = i14;
                                }
                            }
                            defaultValue.invoke(Integer.valueOf(i11));
                            throw null;
                        }
                        List list = (List) keySet;
                        if (i11 < 0 || i11 >= list.size()) {
                            defaultValue.invoke(Integer.valueOf(i11));
                            throw null;
                        }
                        obj = list.get(i11);
                    }
                    List<UnicodeEmojis.Emoji> list2 = (List) map.get(obj);
                    if (list2 != null) {
                        for (UnicodeEmojis.Emoji emoji : list2) {
                            arrayList.add(new EmojiPickerItem.Emoji(IdUtilsKt.convertToId((CharSequence) CollectionsKt.K(emoji.getNames())), (String) CollectionsKt.K(emoji.getNames()), false, null, emoji, false, 44, null));
                        }
                    }
                    i11 = i12;
                }
                return arrayList;
            }
        }
        emojiPickerCache$buildEmojisUnicode$1 = new EmojiPickerCache$buildEmojisUnicode$1(this, continuation);
        Object obj22 = emojiPickerCache$buildEmojisUnicode$1.result;
        ko.a aVar2 = ko.a.f13464d;
        i5 = emojiPickerCache$buildEmojisUnicode$1.label;
        if (i5 != 0) {
        }
        Map map2 = (Map) obj22;
        it = map2.values().iterator();
        int i102 = 0;
        while (it.hasNext()) {
        }
        ArrayList arrayList2 = new ArrayList(i102);
        int i112 = 0;
        while (r4.hasNext()) {
        }
        return arrayList2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit emojiJsonConfig$lambda$0(JsonBuilder Json) {
        Intrinsics.checkNotNullParameter(Json, "$this$Json");
        Json.f13609b = true;
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:12:0x0065  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0075  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0033  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object refreshDatabaseEmojis(Continuation continuation) {
        EmojiPickerCache$refreshDatabaseEmojis$1 emojiPickerCache$refreshDatabaseEmojis$1;
        int i5;
        final List<EmojiPickerItem> list;
        if (continuation instanceof EmojiPickerCache$refreshDatabaseEmojis$1) {
            emojiPickerCache$refreshDatabaseEmojis$1 = (EmojiPickerCache$refreshDatabaseEmojis$1) continuation;
            int i6 = emojiPickerCache$refreshDatabaseEmojis$1.label;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                emojiPickerCache$refreshDatabaseEmojis$1.label = i6 - Integer.MIN_VALUE;
                Object obj = emojiPickerCache$refreshDatabaseEmojis$1.result;
                Object obj2 = ko.a.f13464d;
                i5 = emojiPickerCache$refreshDatabaseEmojis$1.label;
                if (i5 != 0) {
                    ki.b.R(obj);
                    Listener listener = this.emojiPickerListener.get();
                    Context onContext = listener != null ? listener.onContext() : null;
                    if (!(onContext instanceof ReactContext)) {
                        return Unit.a;
                    }
                    List<EmojiPickerItem> buildEmojis = buildEmojis();
                    emojiPickerCache$refreshDatabaseEmojis$1.L$0 = buildEmojis;
                    emojiPickerCache$refreshDatabaseEmojis$1.label = 1;
                    obj = buildEmojisUnicode(onContext, emojiPickerCache$refreshDatabaseEmojis$1);
                    if (obj == obj2) {
                        return obj2;
                    }
                    list = buildEmojis;
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    list = (List) emojiPickerCache$refreshDatabaseEmojis$1.L$0;
                    ki.b.R(obj);
                }
                final List<? extends EmojiPickerItem> list2 = (List) obj;
                if (ThreadUtilsKt.isOnMainThread()) {
                    ThreadUtilsKt.getUiHandler().post(new Runnable() { // from class: com.discord.emoji_picker.EmojiPickerCache$refreshDatabaseEmojis$$inlined$postOrRunOnMainThread$1
                        @Override // java.lang.Runnable
                        public final void run() {
                            EmojiPickerCache.Listener listener2 = (EmojiPickerCache.Listener) EmojiPickerCache.this.emojiPickerListener.get();
                            if (listener2 != null) {
                                listener2.onEmojisUpdated(list, list2);
                            }
                        }
                    });
                } else {
                    Listener listener2 = (Listener) this.emojiPickerListener.get();
                    if (listener2 != null) {
                        listener2.onEmojisUpdated(list, list2);
                    }
                }
                return Unit.a;
            }
        }
        emojiPickerCache$refreshDatabaseEmojis$1 = new EmojiPickerCache$refreshDatabaseEmojis$1(this, continuation);
        Object obj3 = emojiPickerCache$refreshDatabaseEmojis$1.result;
        Object obj22 = ko.a.f13464d;
        i5 = emojiPickerCache$refreshDatabaseEmojis$1.label;
        if (i5 != 0) {
        }
        final List list22 = (List) obj3;
        if (ThreadUtilsKt.isOnMainThread()) {
        }
        return Unit.a;
    }

    public static /* synthetic */ void refreshEmojis$default(EmojiPickerCache emojiPickerCache, EmojiPickerItemData.CoreData coreData, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            coreData = null;
        }
        emojiPickerCache.refreshEmojis(coreData);
    }

    public final void invalidate() {
        Job job = this.emojiFetchJob;
        if (job != null) {
            job.f(null);
        }
    }

    public final void refreshEmojis(EmojiPickerItemData.CoreData emojiCodeData) {
        if (emojiCodeData == null) {
            emojiCodeData = this.emojiCoreData;
        }
        this.emojiCoreData = emojiCodeData;
        if (emojiCodeData.getHasGuildData()) {
            this.emojiFetchEvents.d(Unit.a);
        }
    }
}
