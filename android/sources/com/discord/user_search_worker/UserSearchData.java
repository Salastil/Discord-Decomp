package com.discord.user_search_worker;

import cs.f;
import cs.h;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.json.JsonElement;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e(with = Serializer.class)
@Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b1\u0018\u0000 \u00052\u00020\u0001:\u0002\u0004\u0005B\t\b\u0004¢\u0006\u0004\b\u0002\u0010\u0003\u0082\u0001\u0003\u0006\u0007\b¨\u0006\t"}, d2 = {"Lcom/discord/user_search_worker/UserSearchData;", "", "<init>", "()V", "Serializer", "Companion", "Lcom/discord/user_search_worker/UserSearchQueryClearData;", "Lcom/discord/user_search_worker/UserSearchQuerySetData;", "Lcom/discord/user_search_worker/UserSearchUpdateUsersData;", "user_search_worker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public abstract class UserSearchData {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/user_search_worker/UserSearchData$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/user_search_worker/UserSearchData;", "user_search_worker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return Serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\bÀ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u0005H\u0014¢\u0006\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"Lcom/discord/user_search_worker/UserSearchData$Serializer;", "Lcs/f;", "Lcom/discord/user_search_worker/UserSearchData;", "<init>", "()V", "Lkotlinx/serialization/json/JsonElement;", "element", "Lkotlinx/serialization/DeserializationStrategy;", "selectDeserializer", "(Lkotlinx/serialization/json/JsonElement;)Lkotlinx/serialization/DeserializationStrategy;", "user_search_worker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Serializer extends f {

        @NotNull
        public static final Serializer INSTANCE = new Serializer();

        private Serializer() {
            super(Reflection.getOrCreateKotlinClass(UserSearchData.class));
        }

        @Override // cs.f
        @NotNull
        public DeserializationStrategy selectDeserializer(@NotNull JsonElement element) {
            Intrinsics.checkNotNullParameter(element, "element");
            JsonElement jsonElement = (JsonElement) h.j(element).get("type");
            String a = jsonElement != null ? h.k(jsonElement).a() : null;
            if (a != null) {
                int hashCode = a.hashCode();
                if (hashCode != -1657296142) {
                    if (hashCode != 981007403) {
                        if (hashCode == 2135696342 && a.equals("QUERY_CLEAR")) {
                            return UserSearchQueryClearData.Companion.serializer();
                        }
                    } else if (a.equals("QUERY_SET")) {
                        return UserSearchQuerySetData.Companion.serializer();
                    }
                } else if (a.equals("UPDATE_USERS")) {
                    return UserSearchUpdateUsersData.INSTANCE.serializer();
                }
            }
            throw new IllegalArgumentException("unable to find deserializer for json: " + element);
        }
    }

    public /* synthetic */ UserSearchData(DefaultConstructorMarker defaultConstructorMarker) {
        this();
    }

    private UserSearchData() {
    }
}
