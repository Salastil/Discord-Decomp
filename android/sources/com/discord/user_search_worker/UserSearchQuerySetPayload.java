package com.discord.user_search_worker;

import bs.d;
import bs.h1;
import bs.j0;
import bs.v1;
import bs.x;
import com.discord.jank_stats.JankRecordStore;
import com.discord.notifications.client.a;
import fo.l;
import fo.m;
import java.util.List;
import java.util.Map;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000X\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\b\u0002\n\u0002\u0010$\n\u0002\u0010\u0006\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0017\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 82\u00020\u0001:\u000278Bc\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0010\b\u0002\u0010\u0006\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0007\u0012\u0010\b\u0002\u0010\b\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0007\u0012\u0012\u0010\t\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u000b0\n\u0012\u0006\u0010\f\u001a\u00020\u000b\u0012\u0006\u0010\r\u001a\u00020\u000e¢\u0006\u0004\b\u000f\u0010\u0010Bu\b\u0010\u0012\u0006\u0010\u0011\u001a\u00020\u000e\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u000e\u0010\u0006\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0007\u0012\u000e\u0010\b\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0007\u0012\u0014\u0010\t\u001a\u0010\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u000b\u0018\u00010\n\u0012\u0006\u0010\f\u001a\u00020\u000b\u0012\u0006\u0010\r\u001a\u00020\u000e\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0013¢\u0006\u0004\b\u000f\u0010\u0014J\t\u0010\"\u001a\u00020\u0003HÆ\u0003J\u000b\u0010#\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u0011\u0010$\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0007HÆ\u0003J\u0011\u0010%\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0007HÆ\u0003J\u0015\u0010&\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u000b0\nHÆ\u0003J\t\u0010'\u001a\u00020\u000bHÆ\u0003J\t\u0010(\u001a\u00020\u000eHÆ\u0003Jm\u0010)\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0010\b\u0002\u0010\u0006\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u00072\u0010\b\u0002\u0010\b\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u00072\u0014\b\u0002\u0010\t\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u000b0\n2\b\b\u0002\u0010\f\u001a\u00020\u000b2\b\b\u0002\u0010\r\u001a\u00020\u000eHÆ\u0001J\u0013\u0010*\u001a\u00020+2\b\u0010,\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010-\u001a\u00020\u000eHÖ\u0001J\t\u0010.\u001a\u00020\u0003HÖ\u0001J%\u0010/\u001a\u0002002\u0006\u00101\u001a\u00020\u00002\u0006\u00102\u001a\u0002032\u0006\u00104\u001a\u000205H\u0001¢\u0006\u0002\b6R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018R\u0019\u0010\u0006\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u001aR\u0019\u0010\b\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001aR\u001d\u0010\t\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u000b0\n¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u001dR\u0011\u0010\f\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u001fR\u0011\u0010\r\u001a\u00020\u000e¢\u0006\b\n\u0000\u001a\u0004\b \u0010!¨\u00069"}, d2 = {"Lcom/discord/user_search_worker/UserSearchQuerySetPayload;", "", "query", "", "filters", "Lcom/discord/user_search_worker/UserSearchQuerySetFilters;", "blacklist", "", "whitelist", "boosters", "", "", "boosterFallback", "limit", "", "<init>", "(Ljava/lang/String;Lcom/discord/user_search_worker/UserSearchQuerySetFilters;Ljava/util/List;Ljava/util/List;Ljava/util/Map;DI)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Lcom/discord/user_search_worker/UserSearchQuerySetFilters;Ljava/util/List;Ljava/util/List;Ljava/util/Map;DILkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getQuery", "()Ljava/lang/String;", "getFilters", "()Lcom/discord/user_search_worker/UserSearchQuerySetFilters;", "getBlacklist", "()Ljava/util/List;", "getWhitelist", "getBoosters", "()Ljava/util/Map;", "getBoosterFallback", "()D", "getLimit", "()I", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$user_search_worker_release", "$serializer", "Companion", "user_search_worker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final /* data */ class UserSearchQuerySetPayload {

    @NotNull
    private static final Lazy[] $childSerializers;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final List<String> blacklist;
    private final double boosterFallback;

    @NotNull
    private final Map<String, Double> boosters;
    private final UserSearchQuerySetFilters filters;
    private final int limit;

    @NotNull
    private final String query;
    private final List<String> whitelist;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/user_search_worker/UserSearchQuerySetPayload$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/user_search_worker/UserSearchQuerySetPayload;", "user_search_worker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return UserSearchQuerySetPayload$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    static {
        m mVar = m.f8827e;
        $childSerializers = new Lazy[]{null, null, l.b(mVar, new a(6)), l.b(mVar, new a(7)), l.b(mVar, new a(8)), null, null};
    }

    public /* synthetic */ UserSearchQuerySetPayload(int i5, String str, UserSearchQuerySetFilters userSearchQuerySetFilters, List list, List list2, Map map, double d6, int i6, SerializationConstructorMarker serializationConstructorMarker) {
        if (113 != (i5 & 113)) {
            h1.l(i5, 113, UserSearchQuerySetPayload$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.query = str;
        if ((i5 & 2) == 0) {
            this.filters = null;
        } else {
            this.filters = userSearchQuerySetFilters;
        }
        if ((i5 & 4) == 0) {
            this.blacklist = null;
        } else {
            this.blacklist = list;
        }
        if ((i5 & 8) == 0) {
            this.whitelist = null;
        } else {
            this.whitelist = list2;
        }
        this.boosters = map;
        this.boosterFallback = d6;
        this.limit = i6;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return new d(v1.a, 0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$0() {
        return new d(v1.a, 0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$1() {
        return new j0(v1.a, x.a, 1);
    }

    public static /* synthetic */ UserSearchQuerySetPayload copy$default(UserSearchQuerySetPayload userSearchQuerySetPayload, String str, UserSearchQuerySetFilters userSearchQuerySetFilters, List list, List list2, Map map, double d6, int i5, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            str = userSearchQuerySetPayload.query;
        }
        if ((i6 & 2) != 0) {
            userSearchQuerySetFilters = userSearchQuerySetPayload.filters;
        }
        if ((i6 & 4) != 0) {
            list = userSearchQuerySetPayload.blacklist;
        }
        if ((i6 & 8) != 0) {
            list2 = userSearchQuerySetPayload.whitelist;
        }
        if ((i6 & 16) != 0) {
            map = userSearchQuerySetPayload.boosters;
        }
        if ((i6 & 32) != 0) {
            d6 = userSearchQuerySetPayload.boosterFallback;
        }
        if ((i6 & 64) != 0) {
            i5 = userSearchQuerySetPayload.limit;
        }
        int i10 = i5;
        double d7 = d6;
        Map map2 = map;
        List list3 = list;
        return userSearchQuerySetPayload.copy(str, userSearchQuerySetFilters, list3, list2, map2, d7, i10);
    }

    public static final /* synthetic */ void write$Self$user_search_worker_release(UserSearchQuerySetPayload self, CompositeEncoder output, SerialDescriptor serialDesc) {
        Lazy[] lazyArr = $childSerializers;
        output.y(serialDesc, 0, self.query);
        if (output.I(serialDesc, 1) || self.filters != null) {
            output.z(serialDesc, 1, UserSearchQuerySetFilters$$serializer.INSTANCE, self.filters);
        }
        if (output.I(serialDesc, 2) || self.blacklist != null) {
            output.z(serialDesc, 2, (KSerializer) lazyArr[2].getValue(), self.blacklist);
        }
        if (output.I(serialDesc, 3) || self.whitelist != null) {
            output.z(serialDesc, 3, (KSerializer) lazyArr[3].getValue(), self.whitelist);
        }
        output.g(serialDesc, 4, (KSerializer) lazyArr[4].getValue(), self.boosters);
        output.N(serialDesc, 5, self.boosterFallback);
        output.n(6, self.limit, serialDesc);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getQuery() {
        return this.query;
    }

    /* renamed from: component2, reason: from getter */
    public final UserSearchQuerySetFilters getFilters() {
        return this.filters;
    }

    public final List<String> component3() {
        return this.blacklist;
    }

    public final List<String> component4() {
        return this.whitelist;
    }

    @NotNull
    public final Map<String, Double> component5() {
        return this.boosters;
    }

    /* renamed from: component6, reason: from getter */
    public final double getBoosterFallback() {
        return this.boosterFallback;
    }

    /* renamed from: component7, reason: from getter */
    public final int getLimit() {
        return this.limit;
    }

    @NotNull
    public final UserSearchQuerySetPayload copy(@NotNull String query, UserSearchQuerySetFilters filters, List<String> blacklist, List<String> whitelist, @NotNull Map<String, Double> boosters, double boosterFallback, int limit) {
        Intrinsics.checkNotNullParameter(query, "query");
        Intrinsics.checkNotNullParameter(boosters, "boosters");
        return new UserSearchQuerySetPayload(query, filters, blacklist, whitelist, boosters, boosterFallback, limit);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof UserSearchQuerySetPayload)) {
            return false;
        }
        UserSearchQuerySetPayload userSearchQuerySetPayload = (UserSearchQuerySetPayload) other;
        return Intrinsics.areEqual(this.query, userSearchQuerySetPayload.query) && Intrinsics.areEqual(this.filters, userSearchQuerySetPayload.filters) && Intrinsics.areEqual(this.blacklist, userSearchQuerySetPayload.blacklist) && Intrinsics.areEqual(this.whitelist, userSearchQuerySetPayload.whitelist) && Intrinsics.areEqual(this.boosters, userSearchQuerySetPayload.boosters) && Double.compare(this.boosterFallback, userSearchQuerySetPayload.boosterFallback) == 0 && this.limit == userSearchQuerySetPayload.limit;
    }

    public final List<String> getBlacklist() {
        return this.blacklist;
    }

    public final double getBoosterFallback() {
        return this.boosterFallback;
    }

    @NotNull
    public final Map<String, Double> getBoosters() {
        return this.boosters;
    }

    public final UserSearchQuerySetFilters getFilters() {
        return this.filters;
    }

    public final int getLimit() {
        return this.limit;
    }

    @NotNull
    public final String getQuery() {
        return this.query;
    }

    public final List<String> getWhitelist() {
        return this.whitelist;
    }

    public int hashCode() {
        int hashCode = this.query.hashCode() * 31;
        UserSearchQuerySetFilters userSearchQuerySetFilters = this.filters;
        int hashCode2 = (hashCode + (userSearchQuerySetFilters == null ? 0 : userSearchQuerySetFilters.hashCode())) * 31;
        List<String> list = this.blacklist;
        int hashCode3 = (hashCode2 + (list == null ? 0 : list.hashCode())) * 31;
        List<String> list2 = this.whitelist;
        return Integer.hashCode(this.limit) + com.discord.chat.bridge.botuikit.a.c((this.boosters.hashCode() + ((hashCode3 + (list2 != null ? list2.hashCode() : 0)) * 31)) * 31, this.boosterFallback, 31);
    }

    @NotNull
    public String toString() {
        return "UserSearchQuerySetPayload(query=" + this.query + ", filters=" + this.filters + ", blacklist=" + this.blacklist + ", whitelist=" + this.whitelist + ", boosters=" + this.boosters + ", boosterFallback=" + this.boosterFallback + ", limit=" + this.limit + ")";
    }

    public UserSearchQuerySetPayload(@NotNull String query, UserSearchQuerySetFilters userSearchQuerySetFilters, List<String> list, List<String> list2, @NotNull Map<String, Double> boosters, double d6, int i5) {
        Intrinsics.checkNotNullParameter(query, "query");
        Intrinsics.checkNotNullParameter(boosters, "boosters");
        this.query = query;
        this.filters = userSearchQuerySetFilters;
        this.blacklist = list;
        this.whitelist = list2;
        this.boosters = boosters;
        this.boosterFallback = d6;
        this.limit = i5;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ UserSearchQuerySetPayload(String str, UserSearchQuerySetFilters userSearchQuerySetFilters, List list, List list2, Map map, double d6, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, userSearchQuerySetFilters, list, r6, r7, r8, r10);
        int i10;
        double d7;
        Map map2;
        List list3;
        userSearchQuerySetFilters = (i6 & 2) != 0 ? null : userSearchQuerySetFilters;
        list = (i6 & 4) != 0 ? null : list;
        if ((i6 & 8) != 0) {
            i10 = i5;
            d7 = d6;
            map2 = map;
            list3 = null;
        } else {
            i10 = i5;
            d7 = d6;
            map2 = map;
            list3 = list2;
        }
    }
}
