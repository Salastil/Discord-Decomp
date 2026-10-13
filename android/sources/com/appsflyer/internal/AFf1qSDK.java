package com.appsflyer.internal;

import android.os.Process;
import android.text.AndroidCharacter;
import android.text.TextUtils;
import android.util.TypedValue;
import android.view.ViewConfiguration;
import android.widget.ExpandableListView;
import androidx.annotation.NonNull;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes.dex */
public final class AFf1qSDK {
    private static int $10 = 0;
    private static int $11 = 1;
    private static int AFAdRevenueData = 0;
    private static int areAllFieldsValid = 0;
    private static int component1 = 1;
    private static int getCurrencyIso4217Code;
    private static byte[] getMediationNetwork;
    private static short[] getMonetizationNetwork;
    private static int getRevenue;

    static {
        getRevenue();
        ViewConfiguration.getMaximumDrawingCacheSize();
        TypedValue.complexToFloat(0);
        ExpandableListView.getPackedPositionForChild(0, 0);
        AndroidCharacter.getMirror('0');
        AndroidCharacter.getMirror('0');
        int i5 = areAllFieldsValid + 71;
        component1 = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
            throw null;
        }
    }

    private static void a(int i5, byte b10, short s2, int i6, int i10, Object[] objArr) {
        int i11;
        int length;
        byte[] bArr;
        int i12;
        AFk1kSDK aFk1kSDK = new AFk1kSDK();
        StringBuilder sb2 = new StringBuilder();
        int i13 = i6 + ((int) (AFAdRevenueData ^ 6918351348135370604L));
        boolean z5 = i13 == -1;
        if (z5) {
            byte[] bArr2 = getMediationNetwork;
            if (bArr2 != null) {
                int length2 = bArr2.length;
                byte[] bArr3 = new byte[length2];
                for (int i14 = 0; i14 < length2; i14++) {
                    $10 = ($11 + 69) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    bArr3[i14] = (byte) (bArr2[i14] ^ 6918351348135370604L);
                }
                bArr2 = bArr3;
            }
            if (bArr2 != null) {
                i13 = (byte) (((byte) (getMediationNetwork[((int) (getCurrencyIso4217Code ^ 6918351348135370604L)) + i5] ^ 6918351348135370604L)) + ((int) (AFAdRevenueData ^ 6918351348135370604L)));
                $10 = ($11 + 91) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            } else {
                i13 = (short) (((short) (getMonetizationNetwork[((int) (getCurrencyIso4217Code ^ 6918351348135370604L)) + i5] ^ 6918351348135370604L)) + ((int) (AFAdRevenueData ^ 6918351348135370604L)));
            }
        }
        if (i13 > 0) {
            int i15 = ((i5 + i13) - 2) + ((int) (getCurrencyIso4217Code ^ 6918351348135370604L));
            if (z5) {
                i11 = 1;
            } else {
                $10 = ($11 + 107) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                i11 = 0;
            }
            aFk1kSDK.getCurrencyIso4217Code = i15 + i11;
            char c6 = (char) (i10 + ((int) (getRevenue ^ 6918351348135370604L)));
            aFk1kSDK.getRevenue = c6;
            sb2.append(c6);
            aFk1kSDK.getMediationNetwork = aFk1kSDK.getRevenue;
            byte[] bArr4 = getMediationNetwork;
            if (bArr4 != null) {
                int i16 = $10 + 97;
                $11 = i16 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i16 % 2 == 0) {
                    length = bArr4.length;
                    bArr = new byte[length];
                    i12 = 1;
                } else {
                    length = bArr4.length;
                    bArr = new byte[length];
                    i12 = 0;
                }
                while (i12 < length) {
                    bArr[i12] = (byte) (bArr4[i12] ^ 6918351348135370604L);
                    i12++;
                }
                bArr4 = bArr;
            }
            boolean z6 = bArr4 != null;
            aFk1kSDK.AFAdRevenueData = 1;
            while (aFk1kSDK.AFAdRevenueData < i13) {
                if (z6) {
                    byte[] bArr5 = getMediationNetwork;
                    aFk1kSDK.getCurrencyIso4217Code = aFk1kSDK.getCurrencyIso4217Code - 1;
                    aFk1kSDK.getRevenue = (char) (aFk1kSDK.getMediationNetwork + (((byte) (((byte) (bArr5[r8] ^ 6918351348135370604L)) + s2)) ^ b10));
                } else {
                    short[] sArr = getMonetizationNetwork;
                    aFk1kSDK.getCurrencyIso4217Code = aFk1kSDK.getCurrencyIso4217Code - 1;
                    aFk1kSDK.getRevenue = (char) (aFk1kSDK.getMediationNetwork + (((short) (((short) (sArr[r8] ^ 6918351348135370604L)) + s2)) ^ b10));
                }
                sb2.append(aFk1kSDK.getRevenue);
                aFk1kSDK.getMediationNetwork = aFk1kSDK.getRevenue;
                aFk1kSDK.AFAdRevenueData++;
                $10 = ($11 + 31) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            }
        }
        objArr[0] = sb2.toString();
    }

    @NonNull
    private static AFi1rSDK getCurrencyIso4217Code(@NonNull AFi1wSDK aFi1wSDK, String str, @NonNull String str2, @NonNull String str3) {
        if (str == null) {
            return new AFi1rSDK(aFi1wSDK.getMediationNetwork == AFh1cSDK.DEFAULT, AFi1uSDK.NA);
        }
        String str4 = "";
        Object[] objArr = new Object[1];
        a((ViewConfiguration.getKeyRepeatDelay() >> 16) + 1522762699, (byte) (-(ViewConfiguration.getGlobalActionKeyTimeout() > 0L ? 1 : (ViewConfiguration.getGlobalActionKeyTimeout() == 0L ? 0 : -1))), (short) ((ExpandableListView.getPackedPositionForGroup(0) > 0L ? 1 : (ExpandableListView.getPackedPositionForGroup(0) == 0L ? 0 : -1)) + 107), (-82) - ((Process.getThreadPriority(0) + 20) >> 6), TextUtils.indexOf((CharSequence) "", '0', 0, 0) - 1963671201, objArr);
        String intern = ((String) objArr[0]).intern();
        if (aFi1wSDK.getMediationNetwork == AFh1cSDK.CUSTOM) {
            str4 = new StringBuilder(str2).reverse().toString();
        } else {
            str3 = intern;
        }
        boolean equals = getMediationNetwork(new StringBuilder(str3).reverse().toString(), aFi1wSDK.getRevenue, "android", "v1", str4).equals(str);
        return new AFi1rSDK(equals, equals ? AFi1uSDK.SUCCESS : AFi1uSDK.FAILURE);
    }

    private static String getMediationNetwork(String str, String str2, String str3, String str4, String str5) {
        component1 = (areAllFieldsValid + 17) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        String revenue = AFj1bSDK.getRevenue(TextUtils.join("\u2063", new String[]{str2, str3, str4, str5, ""}), str);
        if (revenue.length() >= 12) {
            return revenue.substring(0, 12);
        }
        component1 = (areAllFieldsValid + 109) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return revenue;
    }

    @NonNull
    public final AFi1rSDK getRevenue(@NonNull AFi1wSDK aFi1wSDK, String str, @NonNull String str2, @NonNull String str3) {
        int i5 = (areAllFieldsValid + 67) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        component1 = i5;
        if (aFi1wSDK != null && str2 != null) {
            int i6 = i5 + 61;
            areAllFieldsValid = i6 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i6 % 2 != 0) {
                throw null;
            }
            if (str3 != null) {
                return getCurrencyIso4217Code(aFi1wSDK, str, str2, str3);
            }
        }
        AFi1rSDK aFi1rSDK = new AFi1rSDK(false, AFi1uSDK.INTERNAL_ERROR);
        areAllFieldsValid = (component1 + 59) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        return aFi1rSDK;
    }

    public static void getRevenue() {
        getCurrencyIso4217Code = -842505383;
        AFAdRevenueData = 1760829245;
        getRevenue = 503259577;
        getMediationNetwork = new byte[]{-125, -23, -7, -7, -7, -3, -49, -26, -30, -7, -11, -8, -8, -4, -7, -5, -3, -1, -2, -10, -14, -28, -56, -23, -7, -2, -52, -27, -2, -7, -7, -8, -29, -12, -2, -5, -50, -24, -4, -12, -12, -4, -11, -31, -5, -1, -6, -4, -8, -6, -8, -2, -9, -2, -6, -30, -5, -7, -1, -3, -8, -12, -4, -8};
    }
}
