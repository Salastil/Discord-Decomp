package com.discord.notifications.actions.intents;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Parcel;
import android.os.Parcelable;
import com.discord.jank_stats.JankRecordStore;
import com.discord.notifications.actions.intents.NotificationAction;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010$\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B%\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0014\u0010\u0004\u001a\u0010\u0012\u0004\u0012\u00020\u0003\u0012\u0006\u0012\u0004\u0018\u00010\u00030\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\u000f\u001a\u00020\u0003HÆ\u0003J\u0017\u0010\u0010\u001a\u0010\u0012\u0004\u0012\u00020\u0003\u0012\u0006\u0012\u0004\u0018\u00010\u00030\u0005HÆ\u0003J+\u0010\u0011\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\u0016\b\u0002\u0010\u0004\u001a\u0010\u0012\u0004\u0012\u00020\u0003\u0012\u0006\u0012\u0004\u0018\u00010\u00030\u0005HÆ\u0001J\u0006\u0010\u0012\u001a\u00020\u0013J\u0013\u0010\u0014\u001a\u00020\r2\b\u0010\u0015\u001a\u0004\u0018\u00010\u0016HÖ\u0003J\t\u0010\u0017\u001a\u00020\u0013HÖ\u0001J\t\u0010\u0018\u001a\u00020\u0003HÖ\u0001J\u0016\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\u0013R\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u001f\u0010\u0004\u001a\u0010\u0012\u0004\u0012\u00020\u0003\u0012\u0006\u0012\u0004\u0018\u00010\u00030\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0011\u0010\f\u001a\u00020\r8F¢\u0006\u0006\u001a\u0004\b\f\u0010\u000e¨\u0006\u001e"}, d2 = {"Lcom/discord/notifications/actions/intents/ContentAction;", "Lcom/discord/notifications/actions/intents/NotificationAction;", "tag", "", "data", "", "<init>", "(Ljava/lang/String;Ljava/util/Map;)V", "getTag", "()Ljava/lang/String;", "getData", "()Ljava/util/Map;", "isLocal", "", "()Z", "component1", "component2", "copy", "describeContents", "", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "writeToParcel", "", "dest", "Landroid/os/Parcel;", "flags", "notification_actions_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ContentAction implements NotificationAction {

    @NotNull
    public static final Parcelable.Creator<ContentAction> CREATOR = new Creator();

    @NotNull
    private final Map<String, String> data;

    @NotNull
    private final String tag;

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public static final class Creator implements Parcelable.Creator<ContentAction> {
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public final ContentAction createFromParcel(Parcel parcel) {
            Intrinsics.checkNotNullParameter(parcel, "parcel");
            String readString = parcel.readString();
            int readInt = parcel.readInt();
            LinkedHashMap linkedHashMap = new LinkedHashMap(readInt);
            for (int i5 = 0; i5 != readInt; i5++) {
                linkedHashMap.put(parcel.readString(), parcel.readString());
            }
            return new ContentAction(readString, linkedHashMap);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public final ContentAction[] newArray(int i5) {
            return new ContentAction[i5];
        }
    }

    public ContentAction(@NotNull String tag, @NotNull Map<String, String> data) {
        Intrinsics.checkNotNullParameter(tag, "tag");
        Intrinsics.checkNotNullParameter(data, "data");
        this.tag = tag;
        this.data = data;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ ContentAction copy$default(ContentAction contentAction, String str, Map map, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = contentAction.tag;
        }
        if ((i5 & 2) != 0) {
            map = contentAction.data;
        }
        return contentAction.copy(str, map);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getTag() {
        return this.tag;
    }

    @NotNull
    public final Map<String, String> component2() {
        return this.data;
    }

    @NotNull
    public final ContentAction copy(@NotNull String tag, @NotNull Map<String, String> data) {
        Intrinsics.checkNotNullParameter(tag, "tag");
        Intrinsics.checkNotNullParameter(data, "data");
        return new ContentAction(tag, data);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ContentAction)) {
            return false;
        }
        ContentAction contentAction = (ContentAction) other;
        return Intrinsics.areEqual(this.tag, contentAction.tag) && Intrinsics.areEqual(this.data, contentAction.data);
    }

    @NotNull
    public final Map<String, String> getData() {
        return this.data;
    }

    @Override // com.discord.notifications.actions.intents.NotificationAction
    public int getPendingIntentRequestCode() {
        return NotificationAction.DefaultImpls.getPendingIntentRequestCode(this);
    }

    @Override // com.discord.notifications.actions.intents.NotificationAction
    @NotNull
    public String getTag() {
        return this.tag;
    }

    public int hashCode() {
        return this.data.hashCode() + (this.tag.hashCode() * 31);
    }

    public final boolean isLocal() {
        return Intrinsics.areEqual(this.data.get("category"), "local");
    }

    @Override // com.discord.notifications.actions.intents.NotificationAction
    public void onNotificationAction(@NotNull Context context, @NotNull Intent intent) {
        NotificationAction.DefaultImpls.onNotificationAction(this, context, intent);
    }

    @Override // com.discord.notifications.actions.intents.NotificationAction
    public void onNotificationActionComplete(@NotNull Context context) {
        NotificationAction.DefaultImpls.onNotificationActionComplete(this, context);
    }

    @Override // com.discord.notifications.actions.intents.NotificationAction
    @NotNull
    public PendingIntent toPendingIntent(@NotNull Context context, int i5, boolean z5) {
        return NotificationAction.DefaultImpls.toPendingIntent(this, context, i5, z5);
    }

    @NotNull
    public String toString() {
        return "ContentAction(tag=" + this.tag + ", data=" + this.data + ")";
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(@NotNull Parcel dest, int flags) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        dest.writeString(this.tag);
        Map<String, String> map = this.data;
        dest.writeInt(map.size());
        for (Map.Entry<String, String> entry : map.entrySet()) {
            dest.writeString(entry.getKey());
            dest.writeString(entry.getValue());
        }
    }
}
