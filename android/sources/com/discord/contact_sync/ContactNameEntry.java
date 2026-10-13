package com.discord.contact_sync;

import com.discord.jank_stats.JankRecordStore;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B\u001b\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\u000b\u0010\n\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u000b\u001a\u0004\u0018\u00010\u0003HÆ\u0003J!\u0010\f\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0010\u001a\u00020\u0011HÖ\u0001J\t\u0010\u0012\u001a\u00020\u0003HÖ\u0001R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\b¨\u0006\u0013"}, d2 = {"Lcom/discord/contact_sync/ContactNameEntry;", "", "givenName", "", "familyName", "<init>", "(Ljava/lang/String;Ljava/lang/String;)V", "getGivenName", "()Ljava/lang/String;", "getFamilyName", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "contact_sync_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ContactNameEntry {
    private final String familyName;
    private final String givenName;

    public ContactNameEntry(String str, String str2) {
        this.givenName = str;
        this.familyName = str2;
    }

    public static /* synthetic */ ContactNameEntry copy$default(ContactNameEntry contactNameEntry, String str, String str2, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = contactNameEntry.givenName;
        }
        if ((i5 & 2) != 0) {
            str2 = contactNameEntry.familyName;
        }
        return contactNameEntry.copy(str, str2);
    }

    /* renamed from: component1, reason: from getter */
    public final String getGivenName() {
        return this.givenName;
    }

    /* renamed from: component2, reason: from getter */
    public final String getFamilyName() {
        return this.familyName;
    }

    @NotNull
    public final ContactNameEntry copy(String givenName, String familyName) {
        return new ContactNameEntry(givenName, familyName);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ContactNameEntry)) {
            return false;
        }
        ContactNameEntry contactNameEntry = (ContactNameEntry) other;
        return Intrinsics.areEqual(this.givenName, contactNameEntry.givenName) && Intrinsics.areEqual(this.familyName, contactNameEntry.familyName);
    }

    public final String getFamilyName() {
        return this.familyName;
    }

    public final String getGivenName() {
        return this.givenName;
    }

    public int hashCode() {
        String str = this.givenName;
        int hashCode = (str == null ? 0 : str.hashCode()) * 31;
        String str2 = this.familyName;
        return hashCode + (str2 != null ? str2.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        return h.g("ContactNameEntry(givenName=", this.givenName, ", familyName=", this.familyName, ")");
    }
}
