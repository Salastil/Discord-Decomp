package com.discord.user_search_worker;

import cd.u;
import com.discord.jank_stats.JankRecordStore;
import com.discord.mobile_voice_overlay.views.e;
import com.facebook.react.devsupport.StackTraceHelper;
import d9.a;
import fo.n;
import java.text.Normalizer;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.regex.Pattern;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.Regex;
import kotlin.text.p;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonBuilder;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000d\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010\u0006\n\u0002\b\u0010\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010%\n\u0002\b\u0005\b\u0000\u0018\u0000 82\u00020\u0001:\u00018B-\u0012$\u0010\u0007\u001a \u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00060\u0002¢\u0006\u0004\b\b\u0010\tJ\u0017\u0010\f\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\nH\u0002¢\u0006\u0004\b\f\u0010\rJ\u0017\u0010\u000f\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\u000eH\u0002¢\u0006\u0004\b\u000f\u0010\u0010J\u0017\u0010\u0012\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\u0011H\u0002¢\u0006\u0004\b\u0012\u0010\u0013J'\u0010\u001a\u001a\u00020\u00192\u0006\u0010\u0014\u001a\u00020\u00052\u0006\u0010\u0016\u001a\u00020\u00152\u0006\u0010\u0018\u001a\u00020\u0017H\u0002¢\u0006\u0004\b\u001a\u0010\u001bJ\u001f\u0010\u001e\u001a\u00020\u00192\u0006\u0010\u001c\u001a\u00020\u00052\u0006\u0010\u001d\u001a\u00020\u0005H\u0002¢\u0006\u0004\b\u001e\u0010\u001fJ'\u0010$\u001a\u00020 2\u0006\u0010!\u001a\u00020 2\u0006\u0010\"\u001a\u00020 2\u0006\u0010#\u001a\u00020 H\u0002¢\u0006\u0004\b$\u0010%J\u001f\u0010'\u001a\u00020\u00062\u0006\u0010&\u001a\u00020\u00052\u0006\u0010\u0018\u001a\u00020\u0017H\u0002¢\u0006\u0004\b'\u0010(J\u0015\u0010*\u001a\u00020\u00062\u0006\u0010)\u001a\u00020\u0005¢\u0006\u0004\b*\u0010+J\r\u0010,\u001a\u00020\u0006¢\u0006\u0004\b,\u0010-R5\u0010\u0007\u001a \u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00060\u00028\u0006¢\u0006\f\n\u0004\b\u0007\u0010.\u001a\u0004\b/\u00100R\u0014\u00102\u001a\u0002018\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b2\u00103R \u00105\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u0015048\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b5\u00106R \u00107\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u0017048\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b7\u00106¨\u00069"}, d2 = {"Lcom/discord/user_search_worker/UserSearchWorker;", "", "Lkotlin/Function3;", "", "Lcom/discord/user_search_worker/UserSearchWorkerResult;", "", "", "onResults", "<init>", "(Lkotlin/jvm/functions/Function3;)V", "Lcom/discord/user_search_worker/UserSearchUpdateUsersData;", "data", "mergeUsers", "(Lcom/discord/user_search_worker/UserSearchUpdateUsersData;)V", "Lcom/discord/user_search_worker/UserSearchQuerySetData;", "setNewQuery", "(Lcom/discord/user_search_worker/UserSearchQuerySetData;)V", "Lcom/discord/user_search_worker/UserSearchQueryClearData;", "clearQuery", "(Lcom/discord/user_search_worker/UserSearchQueryClearData;)V", StackTraceHelper.ID_KEY, "Lcom/discord/user_search_worker/UserSearchTransformedUser;", "user", "Lcom/discord/user_search_worker/UserSearchQuerySetPayload;", "payload", "", "isValid", "(Ljava/lang/String;Lcom/discord/user_search_worker/UserSearchTransformedUser;Lcom/discord/user_search_worker/UserSearchQuerySetPayload;)Z", "needleBase", "haystackBase", "fuzzySearch", "(Ljava/lang/String;Ljava/lang/String;)Z", "", "score", "booster", "boosterFallback", "calculateScore", "(DDD)D", "uuid", "searchUsers", "(Ljava/lang/String;Lcom/discord/user_search_worker/UserSearchQuerySetPayload;)V", "dataJSON", "onMessage", "(Ljava/lang/String;)V", "terminate", "()V", "Lkotlin/jvm/functions/Function3;", "getOnResults", "()Lkotlin/jvm/functions/Function3;", "Lkotlinx/serialization/json/Json;", "json", "Lkotlinx/serialization/json/Json;", "", "users", "Ljava/util/Map;", "queries", "Companion", "user_search_worker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nUserSearchWorker.kt\nKotlin\n*S Kotlin\n*F\n+ 1 UserSearchWorker.kt\ncom/discord/user_search_worker/UserSearchWorker\n+ 2 Json.kt\nkotlinx/serialization/json/Json\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 4 _Maps.kt\nkotlin/collections/MapsKt___MapsKt\n*L\n1#1,283:1\n147#2:284\n1869#3,2:285\n216#4,2:287\n*S KotlinDebug\n*F\n+ 1 UserSearchWorker.kt\ncom/discord/user_search_worker/UserSearchWorker\n*L\n26#1:284\n47#1:285,2\n70#1:287,2\n*E\n"})
/* loaded from: classes3.dex */
public final class UserSearchWorker {
    private static final double CONTAIN_MATCH_VALUE = 5.0d;
    private static final double EXACT_MATCH_VALUE = 10.0d;
    private static final double FUZZY_MATCH_VALUE = 1.0d;

    @NotNull
    private final Json json;

    @NotNull
    private final Function3 onResults;

    @NotNull
    private final Map<String, UserSearchQuerySetPayload> queries;

    @NotNull
    private final Map<String, UserSearchTransformedUser> users;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Regex STRIP_DIACRITICS_REGEX_PATTERN = new Regex("[\\u0300-\\u036f]");

    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001:\u0001\fB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\n\u001a\u00020\u000b*\u00020\u000bH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lcom/discord/user_search_worker/UserSearchWorker$Companion;", "", "<init>", "()V", "EXACT_MATCH_VALUE", "", "CONTAIN_MATCH_VALUE", "FUZZY_MATCH_VALUE", "STRIP_DIACRITICS_REGEX_PATTERN", "Lkotlin/text/Regex;", "strippedOfDiacritics", "", "LocalResult", "user_search_worker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {

        @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0006\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0082\b\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\t\u0010\r\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\u000e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0012\u001a\u00020\u0013HÖ\u0001J\t\u0010\u0014\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0015"}, d2 = {"Lcom/discord/user_search_worker/UserSearchWorker$Companion$LocalResult;", "", "comparator", "", "score", "", "<init>", "(Ljava/lang/String;D)V", "getComparator", "()Ljava/lang/String;", "getScore", "()D", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "user_search_worker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class LocalResult {

            @NotNull
            private final String comparator;
            private final double score;

            public LocalResult(@NotNull String comparator, double d6) {
                Intrinsics.checkNotNullParameter(comparator, "comparator");
                this.comparator = comparator;
                this.score = d6;
            }

            public static /* synthetic */ LocalResult copy$default(LocalResult localResult, String str, double d6, int i5, Object obj) {
                if ((i5 & 1) != 0) {
                    str = localResult.comparator;
                }
                if ((i5 & 2) != 0) {
                    d6 = localResult.score;
                }
                return localResult.copy(str, d6);
            }

            @NotNull
            /* renamed from: component1, reason: from getter */
            public final String getComparator() {
                return this.comparator;
            }

            /* renamed from: component2, reason: from getter */
            public final double getScore() {
                return this.score;
            }

            @NotNull
            public final LocalResult copy(@NotNull String comparator, double score) {
                Intrinsics.checkNotNullParameter(comparator, "comparator");
                return new LocalResult(comparator, score);
            }

            public boolean equals(Object other) {
                if (this == other) {
                    return true;
                }
                if (!(other instanceof LocalResult)) {
                    return false;
                }
                LocalResult localResult = (LocalResult) other;
                return Intrinsics.areEqual(this.comparator, localResult.comparator) && Double.compare(this.score, localResult.score) == 0;
            }

            @NotNull
            public final String getComparator() {
                return this.comparator;
            }

            public final double getScore() {
                return this.score;
            }

            public int hashCode() {
                return Double.hashCode(this.score) + (this.comparator.hashCode() * 31);
            }

            @NotNull
            public String toString() {
                return "LocalResult(comparator=" + this.comparator + ", score=" + this.score + ")";
            }
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final String strippedOfDiacritics(String str) {
            String normalize = Normalizer.normalize(str, Normalizer.Form.NFD);
            Intrinsics.checkNotNull(normalize);
            return UserSearchWorker.STRIP_DIACRITICS_REGEX_PATTERN.replace(normalize, "");
        }

        private Companion() {
        }
    }

    public UserSearchWorker(@NotNull Function3 onResults) {
        Intrinsics.checkNotNullParameter(onResults, "onResults");
        this.onResults = onResults;
        this.json = a.c(new e(13));
        this.users = new LinkedHashMap();
        this.queries = new LinkedHashMap();
    }

    private final double calculateScore(double score, double booster, double boosterFallback) {
        if (booster == 0.0d) {
            booster = boosterFallback;
        }
        return score * booster;
    }

    private final void clearQuery(UserSearchQueryClearData data) {
        this.queries.remove(data.getUuid());
    }

    private final boolean fuzzySearch(String needleBase, String haystackBase) {
        Locale locale = Locale.ROOT;
        String lowerCase = needleBase.toLowerCase(locale);
        Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
        String lowerCase2 = haystackBase.toLowerCase(locale);
        Intrinsics.checkNotNullExpressionValue(lowerCase2, "toLowerCase(...)");
        int length = lowerCase2.length();
        int length2 = lowerCase.length();
        if (length2 > length) {
            return false;
        }
        if (length2 == length) {
            return Intrinsics.areEqual(lowerCase, lowerCase2);
        }
        int length3 = lowerCase.length();
        int i5 = 0;
        for (int i6 = 0; i6 < length3; i6++) {
            char charAt = lowerCase.charAt(i6);
            while (true) {
                if (i5 >= length) {
                    break;
                }
                int i10 = i5 + 1;
                if (lowerCase2.charAt(i5) == charAt) {
                    i5 = i10;
                    break;
                }
                i5 = i10;
            }
            if (i5 == length) {
                return false;
            }
        }
        return true;
    }

    private final boolean isValid(String id2, UserSearchTransformedUser user, UserSearchQuerySetPayload payload) {
        UserSearchQuerySetFilters filters;
        if (payload.getBlacklist() != null && payload.getBlacklist().contains(id2)) {
            return false;
        }
        if ((payload.getWhitelist() != null && payload.getWhitelist().contains(id2)) || (filters = payload.getFilters()) == null) {
            return true;
        }
        Boolean friends = filters.getFriends();
        boolean booleanValue = friends != null ? friends.booleanValue() : false;
        Boolean isFriend = user.isFriend();
        return (booleanValue && (isFriend != null ? isFriend.booleanValue() : false)) || user.getNicknames().containsKey(filters.getGuild());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit json$lambda$0(JsonBuilder Json) {
        Intrinsics.checkNotNullParameter(Json, "$this$Json");
        Json.f13609b = true;
        return Unit.a;
    }

    /* JADX WARN: Code restructure failed: missing block: B:33:0x009f, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r2.getFriendNickname(), r5 != null ? r5.getFriendNickname() : null) == false) goto L36;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final void mergeUsers(UserSearchUpdateUsersData data) {
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        boolean z5 = false;
        for (UserSearchTransformedUser userSearchTransformedUser : data.getPayload()) {
            String id2 = userSearchTransformedUser.getId();
            UserSearchTransformedUser userSearchTransformedUser2 = this.users.get(id2);
            if (userSearchTransformedUser2 != null) {
                String id3 = userSearchTransformedUser.getId();
                String username = userSearchTransformedUser.getUsername();
                Boolean isBot = userSearchTransformedUser.isBot();
                if (isBot == null) {
                    isBot = userSearchTransformedUser2.isBot();
                }
                Boolean bool = isBot;
                Boolean isFriend = userSearchTransformedUser.isFriend();
                if (isFriend == null) {
                    isFriend = userSearchTransformedUser2.isFriend();
                }
                Boolean bool2 = isFriend;
                String friendNickname = userSearchTransformedUser.getFriendNickname();
                if (friendNickname == null) {
                    friendNickname = userSearchTransformedUser2.getFriendNickname();
                }
                String str = friendNickname;
                String globalName = userSearchTransformedUser.getGlobalName();
                if (globalName == null) {
                    globalName = userSearchTransformedUser2.getGlobalName();
                }
                UserSearchTransformedUser copy = userSearchTransformedUser2.copy(id3, username, bool, bool2, str, globalName, v0.i(userSearchTransformedUser2.getNicknames(), userSearchTransformedUser.getNicknames()));
                if (copy != null) {
                    userSearchTransformedUser = copy;
                }
            }
            this.users.put(id2, userSearchTransformedUser);
            if (!this.queries.isEmpty()) {
                if (Intrinsics.areEqual(userSearchTransformedUser.isFriend(), userSearchTransformedUser2 != null ? userSearchTransformedUser2.isFriend() : null)) {
                }
                z5 = true;
                linkedHashSet.addAll(userSearchTransformedUser.getNicknames().keySet());
            }
        }
        for (Map.Entry<String, UserSearchQuerySetPayload> entry : this.queries.entrySet()) {
            String key = entry.getKey();
            UserSearchQuerySetPayload value = entry.getValue();
            UserSearchQuerySetFilters filters = value.getFilters();
            if (filters == null || Intrinsics.areEqual(filters.getFriends(), Boolean.valueOf(z5)) || (filters.getGuild() != null && linkedHashSet.contains(filters.getGuild()))) {
                searchUsers(key, value);
            }
        }
    }

    private final void searchUsers(String uuid, UserSearchQuerySetPayload payload) {
        List V;
        UserSearchWorkerResult userSearchWorkerResult;
        char c6;
        boolean z5;
        double d6;
        Companion.LocalResult localResult;
        Companion.LocalResult localResult2;
        Boolean strict;
        UserSearchWorker userSearchWorker = this;
        String literal = payload.getQuery();
        UserSearchQuerySetFilters filters = payload.getFilters();
        char c8 = 0;
        boolean booleanValue = (filters == null || (strict = filters.getStrict()) == null) ? false : strict.booleanValue();
        ArrayList arrayList = new ArrayList();
        if (literal.length() == 0) {
            userSearchWorker.onResults.invoke(arrayList, literal, uuid);
            return;
        }
        Regex.f13559e.getClass();
        Intrinsics.checkNotNullParameter(literal, "literal");
        String quote = Pattern.quote(literal);
        Intrinsics.checkNotNullExpressionValue(quote, "quote(...)");
        String k = a3.e.k("^", quote);
        p pVar = p.f13587e;
        Regex regex = new Regex(k, pVar);
        Regex regex2 = new Regex(quote, pVar);
        Iterator<Map.Entry<String, UserSearchTransformedUser>> it = userSearchWorker.users.entrySet().iterator();
        while (true) {
            int i5 = 4;
            if (!it.hasNext()) {
                e eVar = new e(14);
                e eVar2 = new e(15);
                Function1[] selectors = new Function1[2];
                selectors[c8] = eVar;
                selectors[1] = eVar2;
                Intrinsics.checkNotNullParameter(selectors, "selectors");
                userSearchWorker.onResults.invoke(CollectionsKt.f0(CollectionsKt.e0(arrayList, new u(i5, selectors)), payload.getLimit()), literal, uuid);
                return;
            }
            Map.Entry<String, UserSearchTransformedUser> next = it.next();
            String key = next.getKey();
            UserSearchTransformedUser value = next.getValue();
            String username = value.getUsername();
            if (userSearchWorker.isValid(key, value, payload)) {
                Double d7 = payload.getBoosters().get(key);
                double doubleValue = d7 != null ? d7.doubleValue() : 0.0d;
                double boosterFallback = payload.getBoosterFallback();
                if (Intrinsics.areEqual(key, literal)) {
                    userSearchWorkerResult = new UserSearchWorkerResult(key, username, key, userSearchWorker.calculateScore(EXACT_MATCH_VALUE, doubleValue, boosterFallback));
                } else {
                    if (booleanValue) {
                        String[] strArr = new String[4];
                        strArr[c8] = value.getUsername();
                        strArr[1] = value.getGlobalName();
                        strArr[2] = value.getFriendNickname();
                        Map<String, String> nicknames = value.getNicknames();
                        UserSearchQuerySetFilters filters2 = payload.getFilters();
                        strArr[3] = nicknames.get(filters2 != null ? filters2.getGuild() : null);
                        V = c0.g(strArr);
                    } else {
                        if (booleanValue) {
                            throw new n();
                        }
                        V = CollectionsKt.V(c0.g(value.getUsername(), value.getGlobalName(), value.getFriendNickname()), value.getNicknames().values());
                    }
                    Iterator it2 = CollectionsKt.I(V).iterator();
                    userSearchWorkerResult = null;
                    while (it2.hasNext()) {
                        String str = (String) it2.next();
                        if (regex.a(str)) {
                            c6 = c8;
                            z5 = booleanValue;
                            d6 = doubleValue;
                            localResult2 = new Companion.LocalResult(str, calculateScore(EXACT_MATCH_VALUE, d6, boosterFallback));
                        } else {
                            c6 = c8;
                            z5 = booleanValue;
                            d6 = doubleValue;
                            if (regex2.a(str)) {
                                localResult2 = new Companion.LocalResult(str, calculateScore(CONTAIN_MATCH_VALUE, d6, boosterFallback));
                            } else if (fuzzySearch(literal, INSTANCE.strippedOfDiacritics(str))) {
                                localResult2 = new Companion.LocalResult(str, calculateScore(FUZZY_MATCH_VALUE, d6, boosterFallback));
                            } else {
                                localResult = null;
                                if (localResult != null && (userSearchWorkerResult == null || userSearchWorkerResult.getScore() < localResult.getScore())) {
                                    userSearchWorkerResult = new UserSearchWorkerResult(key, username, localResult.getComparator(), localResult.getScore());
                                }
                                doubleValue = d6;
                                c8 = c6;
                                booleanValue = z5;
                            }
                        }
                        localResult = localResult2;
                        if (localResult != null) {
                            userSearchWorkerResult = new UserSearchWorkerResult(key, username, localResult.getComparator(), localResult.getScore());
                        }
                        doubleValue = d6;
                        c8 = c6;
                        booleanValue = z5;
                    }
                }
                userSearchWorker = this;
                char c10 = c8;
                boolean z6 = booleanValue;
                if (userSearchWorkerResult != null) {
                    arrayList.add(userSearchWorkerResult);
                }
                c8 = c10;
                booleanValue = z6;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Comparable searchUsers$lambda$3(UserSearchWorkerResult it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Double.valueOf(-it.getScore());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Comparable searchUsers$lambda$4(UserSearchWorkerResult it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return it.getComparator();
    }

    private final void setNewQuery(UserSearchQuerySetData data) {
        this.queries.put(data.getUuid(), data.getPayload());
        searchUsers(data.getUuid(), data.getPayload());
    }

    @NotNull
    public final Function3 getOnResults() {
        return this.onResults;
    }

    public final void onMessage(@NotNull String dataJSON) {
        Intrinsics.checkNotNullParameter(dataJSON, "dataJSON");
        Json json = this.json;
        json.getClass();
        UserSearchData userSearchData = (UserSearchData) json.b(UserSearchData.INSTANCE.serializer(), dataJSON);
        if (userSearchData instanceof UserSearchUpdateUsersData) {
            mergeUsers((UserSearchUpdateUsersData) userSearchData);
        } else if (userSearchData instanceof UserSearchQuerySetData) {
            setNewQuery((UserSearchQuerySetData) userSearchData);
        } else {
            if (!(userSearchData instanceof UserSearchQueryClearData)) {
                throw new n();
            }
            clearQuery((UserSearchQueryClearData) userSearchData);
        }
    }

    public final void terminate() {
        this.users.clear();
        this.queries.clear();
    }
}
