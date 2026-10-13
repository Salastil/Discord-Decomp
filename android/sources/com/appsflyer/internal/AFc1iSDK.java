package com.appsflyer.internal;

import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.graphics.Color;
import android.graphics.ImageFormat;
import android.graphics.PointF;
import android.graphics.drawable.Drawable;
import android.hardware.SensorManager;
import android.media.AudioTrack;
import android.os.Build;
import android.os.Process;
import android.os.SystemClock;
import android.text.AndroidCharacter;
import android.text.TextUtils;
import android.util.TypedValue;
import android.view.KeyEvent;
import android.view.View;
import android.view.ViewConfiguration;
import android.widget.ExpandableListView;
import androidx.annotation.NonNull;
import com.appsflyer.AFLogger;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

/* loaded from: classes.dex */
public final class AFc1iSDK extends HashMap<String, Object> {
    private static int $10 = 0;
    private static int $11 = 1;
    private static int areAllFieldsValid = 1;
    private static int getMediationNetwork;
    private static long getMonetizationNetwork;
    private static int getRevenue;
    private final Map<String, Object> AFAdRevenueData;
    private final Context getCurrencyIso4217Code;

    public static class AFa1zSDK {
        public static byte[] AFAdRevenueData(@NonNull byte[] bArr) {
            for (int i5 = 0; i5 < bArr.length; i5++) {
                bArr[i5] = (byte) (bArr[i5] ^ ((i5 % 2) + 42));
            }
            return bArr;
        }

        @NonNull
        public static byte[] getMonetizationNetwork(@NonNull String str) {
            return str.getBytes(Charset.defaultCharset());
        }
    }

    static {
        AFAdRevenueData();
        PointF.length(0.0f, 0.0f);
        ExpandableListView.getPackedPositionChild(0L);
        ViewConfiguration.getZoomControlsTimeout();
        ViewConfiguration.getScrollDefaultDelay();
        View.MeasureSpec.makeMeasureSpec(0, 0);
        ImageFormat.getBitsPerPixel(0);
        ViewConfiguration.getFadingEdgeLength();
        SystemClock.currentThreadTimeMillis();
        KeyEvent.getModifierMetaStateMask();
        ViewConfiguration.getTouchSlop();
        ViewConfiguration.getScrollBarSize();
        TypedValue.complexToFraction(0, 0.0f, 0.0f);
        ViewConfiguration.getScrollFriction();
        Process.myPid();
        View.resolveSizeAndState(0, 0, 0);
        ExpandableListView.getPackedPositionChild(0L);
        ViewConfiguration.getFadingEdgeLength();
        ViewConfiguration.getTapTimeout();
        TextUtils.indexOf((CharSequence) "", '0', 0, 0);
        int i5 = areAllFieldsValid + 19;
        getRevenue = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 != 0) {
            throw null;
        }
    }

    public AFc1iSDK(Map<String, Object> map, Context context) {
        this.AFAdRevenueData = map;
        this.getCurrencyIso4217Code = context;
        put(getMediationNetwork(), getMonetizationNetwork());
    }

    public static void AFAdRevenueData() {
        getMediationNetwork = -33994396;
        getMonetizationNetwork = 8254201675162375375L;
    }

    private static void a(String str, int i5, int i6, int i10, boolean z5, Object[] objArr) {
        char[] cArr = str;
        if (str != null) {
            int i11 = $10 + 15;
            $11 = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i11 % 2 == 0) {
                str.toCharArray();
                throw null;
            }
            cArr = str.toCharArray();
        }
        char[] cArr2 = cArr;
        AFk1cSDK aFk1cSDK = new AFk1cSDK();
        char[] cArr3 = new char[i6];
        aFk1cSDK.getMonetizationNetwork = 0;
        while (true) {
            int i12 = aFk1cSDK.getMonetizationNetwork;
            if (i12 >= i6) {
                break;
            }
            $10 = ($11 + 45) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            char c6 = cArr2[i12];
            aFk1cSDK.AFAdRevenueData = c6;
            char c8 = (char) (c6 + i10);
            cArr3[i12] = c8;
            cArr3[i12] = (char) (c8 - ((int) (getMediationNetwork ^ (-1147347204026316506L))));
            aFk1cSDK.getMonetizationNetwork = i12 + 1;
        }
        if (i5 > 0) {
            $10 = ($11 + 43) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            aFk1cSDK.getCurrencyIso4217Code = i5;
            char[] cArr4 = new char[i6];
            System.arraycopy(cArr3, 0, cArr4, 0, i6);
            int i13 = aFk1cSDK.getCurrencyIso4217Code;
            System.arraycopy(cArr4, 0, cArr3, i6 - i13, i13);
            int i14 = aFk1cSDK.getCurrencyIso4217Code;
            System.arraycopy(cArr4, i14, cArr3, 0, i6 - i14);
        }
        if (z5) {
            char[] cArr5 = new char[i6];
            aFk1cSDK.getMonetizationNetwork = 0;
            while (true) {
                int i15 = aFk1cSDK.getMonetizationNetwork;
                if (i15 >= i6) {
                    break;
                }
                cArr5[i15] = cArr3[(i6 - i15) - 1];
                aFk1cSDK.getMonetizationNetwork = i15 + 1;
            }
            cArr3 = cArr5;
        }
        objArr[0] = new String(cArr3);
    }

    private static void b(String str, int i5, Object[] objArr) {
        char[] cArr;
        int i6 = $10;
        $11 = (i6 + 27) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        char[] cArr2 = str;
        if (str != null) {
            int i10 = i6 + 97;
            $11 = i10 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i10 % 2 == 0) {
                int i11 = 74 / 0;
                cArr = str.toCharArray();
            } else {
                cArr = str.toCharArray();
            }
            $11 = ($10 + 9) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            cArr2 = cArr;
        }
        AFk1gSDK aFk1gSDK = new AFk1gSDK();
        char[] currencyIso4217Code = AFk1gSDK.getCurrencyIso4217Code(getMonetizationNetwork ^ 7975055078221964256L, cArr2, i5);
        aFk1gSDK.getCurrencyIso4217Code = 4;
        while (true) {
            int i12 = aFk1gSDK.getCurrencyIso4217Code;
            if (i12 >= currencyIso4217Code.length) {
                objArr[0] = new String(currencyIso4217Code, 4, currencyIso4217Code.length - 4);
                return;
            }
            $11 = ($10 + 23) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            aFk1gSDK.getMediationNetwork = i12 - 4;
            currencyIso4217Code[i12] = (char) ((currencyIso4217Code[i12] ^ currencyIso4217Code[i12 % 4]) ^ (r3 * (getMonetizationNetwork ^ 7975055078221964256L)));
            aFk1gSDK.getCurrencyIso4217Code = i12 + 1;
        }
    }

    private static StringBuilder getCurrencyIso4217Code(@NonNull String... strArr) {
        ArrayList arrayList = new ArrayList();
        int length = strArr.length;
        for (int i5 = 0; i5 < 3; i5++) {
            arrayList.add(Integer.valueOf(strArr[i5].length()));
        }
        Collections.sort(arrayList);
        int intValue = ((Integer) arrayList.get(0)).intValue();
        StringBuilder sb2 = new StringBuilder();
        for (int i6 = 0; i6 < intValue; i6++) {
            Integer num = null;
            for (int i10 = 0; i10 < 3; i10++) {
                getRevenue = (areAllFieldsValid + 57) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                int charAt = strArr[i10].charAt(i6);
                if (num == null) {
                    int i11 = areAllFieldsValid + 69;
                    getRevenue = i11 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    if (i11 % 2 != 0) {
                        throw null;
                    }
                } else {
                    charAt ^= num.intValue();
                }
                num = Integer.valueOf(charAt);
            }
            sb2.append(Integer.toHexString(num.intValue()));
        }
        return sb2;
    }

    @NonNull
    private String getMediationNetwork() {
        try {
            String num = Integer.toString(Build.VERSION.SDK_INT);
            Map<String, Object> map = this.AFAdRevenueData;
            Object[] objArr = new Object[1];
            a("\n\ufff7\u0003\u0006\ufff7￼\ufff5\n\uffff\u0003\ufffb\t", ExpandableListView.getPackedPositionGroup(0L) + 4, 11 - ExpandableListView.getPackedPositionChild(0L), TextUtils.getCapsMode("", 0, 0) + 172, false, objArr);
            String obj = map.get(((String) objArr[0]).intern()).toString();
            Map<String, Object> map2 = this.AFAdRevenueData;
            Object[] objArr2 = new Object[1];
            a("\ufffa\u000b\ufffb�\u0007", 3 - View.MeasureSpec.makeMeasureSpec(0, 0), 5 - Color.blue(0), (TypedValue.complexToFraction(0, 0.0f, 0.0f) > 0.0f ? 1 : (TypedValue.complexToFraction(0, 0.0f, 0.0f) == 0.0f ? 0 : -1)) + 169, true, objArr2);
            String obj2 = map2.get(((String) objArr2[0]).intern()).toString();
            if (obj2 == null) {
                Object[] objArr3 = new Object[1];
                a("\u0003\u0002\ufff8\u0002\ufff5\u0006\ufff6\u0013", TextUtils.indexOf("", "") + 2, 8 - (ViewConfiguration.getTapTimeout() >> 16), 142 - Drawable.resolveOpacity(0, 0), true, objArr3);
                obj2 = ((String) objArr3[0]).intern();
            }
            StringBuilder sb2 = new StringBuilder(obj);
            sb2.reverse();
            StringBuilder currencyIso4217Code = getCurrencyIso4217Code(num, obj2, sb2.toString());
            int length = currencyIso4217Code.length();
            if (length > 4) {
                int i5 = areAllFieldsValid + 97;
                getRevenue = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                int i6 = i5 % 2;
                currencyIso4217Code.delete(4, length);
            } else {
                while (length < 4) {
                    getRevenue = (areAllFieldsValid + 89) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    length++;
                    currencyIso4217Code.append('1');
                }
            }
            Object[] objArr4 = new Object[1];
            b("퍵ƅ哆鈷팞뛏㫾", (ViewConfiguration.getZoomControlsTimeout() > 0L ? 1 : (ViewConfiguration.getZoomControlsTimeout() == 0L ? 0 : -1)), objArr4);
            currencyIso4217Code.insert(0, ((String) objArr4[0]).intern());
            return currencyIso4217Code.toString();
        } catch (Exception e9) {
            Object[] objArr5 = new Object[1];
            b("쬇\udc3a\uf4e9ꃕ쬧歲髒蔬\u17ed俣뾸ꋹ爆경퍙羱嵚鄵\uf01e᭰맗\uf642ᗂ㣆蓎\uda93䪂햘\ue706㿃湈\uf100쉈ᰌ茍蹄⺌䅐ꂮꮘ৬ꖘ쑧䢔", -((byte) KeyEvent.getModifierMetaStateMask()), objArr5);
            AFLogger.afErrorLogForExcManagerOnly(((String) objArr5[0]).intern(), e9);
            StringBuilder sb3 = new StringBuilder();
            Object[] objArr6 = new Object[1];
            b("╨鳵다턗┎⮻\udcd3\uf4f6鈴ེ吏팹鱵\uec3c镗\u0e60댽퇢똟檸埿뛊叁䤏檢騎ಅꑋॹ罂⡕肋ⰸ峎앆ￃ샰ƙ\ue6bf\uda0a\ue780\ue557艱㥐먊쩒", -((byte) KeyEvent.getModifierMetaStateMask()), objArr6);
            sb3.append(((String) objArr6[0]).intern());
            sb3.append(e9);
            AFLogger.afRDLog(sb3.toString());
            Object[] objArr7 = new Object[1];
            b("쁃w\uf497꜍쀨뜽骯芹᳆鎥뾴", Drawable.resolveOpacity(0, 0) + 1, objArr7);
            return ((String) objArr7[0]).intern();
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(24:0|1|2|3|4|5|6|7|8|(5:9|10|11|(2:13|14)|15)|(2:17|(13:19|20|21|22|23|24|25|26|(3:28|(3:30|31|32)(1:34)|33)|35|36|37|(1:39)(1:41)))|50|20|21|22|23|24|25|26|(0)|35|36|37|(0)(0)) */
    /* JADX WARN: Can't wrap try/catch for region: R(28:0|1|2|3|4|5|6|7|8|9|10|11|(2:13|14)|15|(2:17|(13:19|20|21|22|23|24|25|26|(3:28|(3:30|31|32)(1:34)|33)|35|36|37|(1:39)(1:41)))|50|20|21|22|23|24|25|26|(0)|35|36|37|(0)(0)) */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x02fc, code lost:
    
        r0 = e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x0314, code lost:
    
        r15 = new java.lang.Object[1];
        a("\u0005\u0015\f\u0001\ufff6ￒ\ufff6\u0014\u0005\u0007\u0012\u000f\u0012\u0012\u0005\uffc0", android.widget.ExpandableListView.getPackedPositionType(r18) + 10, 16 - (android.view.ViewConfiguration.getScrollBarFadeDuration() >> 16), android.view.KeyEvent.getDeadChar(0, 0) + 162, true, r15);
        com.appsflyer.AFLogger.afErrorLogForExcManagerOnly(((java.lang.String) r15[0]).intern(), r0);
        r3 = new java.lang.StringBuilder();
        r6 = new java.lang.Object[1];
        b("罹写䟍老缟\ue6d7⧺ꗠꎠ숖\u0cf7舯왤⅐恾彶\ue92c\u1c8e䌶㮮෮箦ꛨ᠙コ坢鈴\uf559卽뉻\udd6e퇔瘪醣〻께骹쳳ᎋ謏부⠢睃桁\ue04eݰ䩁䓄", (android.view.ViewConfiguration.getMinimumFlingVelocity() >> 16) + 1, r6);
        r3.append(((java.lang.String) r6[0]).intern());
        r3.append(r0);
        com.appsflyer.AFLogger.afRDLog(r3.toString());
        r0 = new java.lang.StringBuilder();
        r0.append(r5);
        r15 = new java.lang.Object[1];
        a("\u001bￜ\u001b\uffdd\uffdd\u000e\u0013\u001f\f\u0018\u0011ￛ\u001cￛ\u001cￜ", 9 - android.widget.ExpandableListView.getPackedPositionChild(r18), '@' - android.text.AndroidCharacter.getMirror(r20), android.view.KeyEvent.normalizeMetaState(0) + 151, false, r15);
        r0.append(((java.lang.String) r15[0]).intern());
        r0 = r0.toString();
     */
    /* JADX WARN: Code restructure failed: missing block: B:47:0x0311, code lost:
    
        r0 = e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x01bc, code lost:
    
        r21 = null;
     */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0197  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x01ca A[Catch: Exception -> 0x01b9, TRY_LEAVE, TryCatch #3 {Exception -> 0x01b9, blocks: (B:10:0x0160, B:14:0x019f, B:15:0x01c0, B:17:0x01ca, B:20:0x01f1), top: B:9:0x0160 }] */
    /* JADX WARN: Removed duplicated region for block: B:28:0x02e1 A[Catch: Exception -> 0x02fc, TRY_LEAVE, TryCatch #2 {Exception -> 0x02fc, blocks: (B:26:0x020f, B:28:0x02e1, B:31:0x02f5, B:33:0x02fe, B:36:0x0304), top: B:25:0x020f }] */
    /* JADX WARN: Removed duplicated region for block: B:39:0x039c A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:41:0x039d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private String getMonetizationNetwork() {
        long j;
        String obj;
        char c6;
        int i5;
        Intent registerReceiver;
        int i6;
        String str;
        int i10;
        String obj2;
        String obj3;
        String intern;
        try {
            Map<String, Object> map = this.AFAdRevenueData;
            Object[] objArr = new Object[1];
            a("\n\ufff7\u0003\u0006\ufff7￼\ufff5\n\uffff\u0003\ufffb\t", (ViewConfiguration.getJumpTapTimeout() >> 16) + 4, (ViewConfiguration.getWindowTouchSlop() >> 8) + 12, (ViewConfiguration.getTouchSlop() >> 8) + 172, false, objArr);
            obj2 = map.get(((String) objArr[0]).intern()).toString();
            Map<String, Object> map2 = this.AFAdRevenueData;
            Object[] objArr2 = new Object[1];
            a("\uffde\ufffb\u000e\uffff\u0000\u0003\f\r\u000e￦\ufffb\u000f\b�\u0002", TextUtils.indexOf("", "", 0) + 4, (ExpandableListView.getPackedPositionForChild(0, 0) > 0L ? 1 : (ExpandableListView.getPackedPositionForChild(0, 0) == 0L ? 0 : -1)) + 16, View.getDefaultSize(0, 0) + 168, false, objArr2);
            obj3 = map2.get(((String) objArr2[0]).intern()).toString();
            Object[] objArr3 = new Object[1];
            b("䰕袗ꊇ\uf38b䰣㾖쳨혱邇\u1b4f", (ViewConfiguration.getWindowTouchSlop() >> 8) + 1, objArr3);
            intern = ((String) objArr3[0]).intern();
            j = 0;
        } catch (Exception e9) {
            e = e9;
            j = 0;
        }
        try {
            Object[] objArr4 = new Object[1];
            a("￨￥￩\u001e-", 1 - (ViewConfiguration.getDoubleTapTimeout() >> 16), KeyEvent.getDeadChar(0, 0) + 5, 183 - AndroidCharacter.getMirror('0'), true, objArr4);
            String replaceAll = intern.replaceAll(((String) objArr4[0]).intern(), "");
            StringBuilder sb2 = new StringBuilder();
            sb2.append(obj2);
            sb2.append(obj3);
            sb2.append(replaceAll);
            String currencyIso4217Code = AFj1bSDK.getCurrencyIso4217Code(sb2.toString());
            StringBuilder sb3 = new StringBuilder("");
            sb3.append(currencyIso4217Code.substring(0, 16));
            obj = sb3.toString();
        } catch (Exception e10) {
            e = e10;
            Object[] objArr5 = new Object[1];
            a("\u0013\u0006\u000f\u0006\b\uffc1\u0005\u0006\r\n\u0002\u0007\uffc1\u0006\u0016\r\u0002\ufff7ￓ\ufff7\u0015\u0006\b\u0006\u0016\r\u0002\u0017\uffc1\u0007\u0006\f\uffc1\b\u000f\n\u0015\u0002", TextUtils.indexOf("", "", 0) + 23, TextUtils.getOffsetAfter("", 0) + 38, 160 - Process.getGidForName(""), true, objArr5);
            AFLogger.afErrorLogForExcManagerOnly(((String) objArr5[0]).intern(), e);
            StringBuilder sb4 = new StringBuilder();
            Object[] objArr6 = new Object[1];
            b("罹写䟍老缟\ue6d7⧺ꗠꎠ숖\u0cf7舯왤⅐恾彶\ue92c\u1c8e䌶㮮෮箦ꛨ᠙コ坢鈴\uf559卽뉻\udd6e퇔瘪醣〻께骹쳳ᎋ謏부⠢睃桁\ue04eݰ䩁䓄", 1 - (ViewConfiguration.getWindowTouchSlop() >> 8), objArr6);
            sb4.append(((String) objArr6[0]).intern());
            sb4.append(e);
            AFLogger.afRDLog(sb4.toString());
            StringBuilder sb5 = new StringBuilder("");
            Object[] objArr7 = new Object[1];
            a("￨\u001c\ufff1￩\u001e￪￨￩\ufff0\u001a\u0019\u001a\u001d\u0019\u001d￨￭￬", 9 - Color.red(0), 17 - Process.getGidForName(""), 138 - KeyEvent.getDeadChar(0, 0), false, objArr7);
            sb5.append(((String) objArr7[0]).intern());
            obj = sb5.toString();
            String str2 = obj;
            Context context = this.getCurrencyIso4217Code;
            Object[] objArr8 = new Object[1];
            a("\u0016\u0010\u000bￕ\u0010\u0015\u001b\f\u0015\u001bￕ\b\n\u001b\u0010\u0016\u0015ￕ￩￨\ufffb\ufffb￬\ufff9\u0000\u0006￪\uffef￨\ufff5￮￬￫\b\u0015\u000b\u0019", 34 - (ViewConfiguration.getZoomControlsTimeout() > j ? 1 : (ViewConfiguration.getZoomControlsTimeout() == j ? 0 : -1)), (ViewConfiguration.getGlobalActionKeyTimeout() > j ? 1 : (ViewConfiguration.getGlobalActionKeyTimeout() == j ? 0 : -1)) + 36, View.combineMeasuredStates(0, 0) + 155, false, objArr8);
            registerReceiver = context.registerReceiver(null, new IntentFilter(((String) objArr8[0]).intern()));
            i6 = -2700;
            if (registerReceiver != null) {
            }
            str = this.getCurrencyIso4217Code.getApplicationInfo().nativeLibraryDir;
            if (str != null) {
            }
            i10 = 0;
            Context context2 = this.getCurrencyIso4217Code;
            c6 = '0';
            Throwable th2 = null;
            Object[] objArr9 = new Object[1];
            a("\u0004\u0000\u0003\u0004\ufff6\uffff", (PointF.length(0.0f, 0.0f) > 0.0f ? 1 : (PointF.length(0.0f, 0.0f) == 0.0f ? 0 : -1)) + 3, 6 - (KeyEvent.getMaxKeyCode() >> 16), 177 - TextUtils.indexOf("", "", 0, 0), false, objArr9);
            int size = ((SensorManager) context2.getSystemService(((String) objArr9[0]).intern())).getSensorList(-1).size();
            StringBuilder sb6 = new StringBuilder();
            Object[] objArr10 = new Object[1];
            b("ē甉썕敖ű", (AudioTrack.getMaxVolume() > 0.0f ? 1 : (AudioTrack.getMaxVolume() == 0.0f ? 0 : -1)), objArr10);
            sb6.append(((String) objArr10[0]).intern());
            sb6.append(i6);
            Object[] objArr11 = new Object[1];
            a("ￗ)", AndroidCharacter.getMirror('0') - '.', TextUtils.getCapsMode("", 0, 0) + 2, View.MeasureSpec.getSize(0) + 145, false, objArr11);
            sb6.append(((String) objArr11[0]).intern());
            sb6.append(i10);
            Object[] objArr12 = new Object[1];
            b("蕕캷卍\udf3c蕳秫", 1 - (ExpandableListView.getPackedPositionForGroup(0) > j ? 1 : (ExpandableListView.getPackedPositionForGroup(0) == j ? 0 : -1)), objArr12);
            sb6.append(((String) objArr12[0]).intern());
            sb6.append(size);
            Object[] objArr13 = new Object[1];
            b("\udfe2ஔ催뭍\udfc4볋", 1 - (ViewConfiguration.getMinimumFlingVelocity() >> 16), objArr13);
            sb6.append(((String) objArr13[0]).intern());
            sb6.append(this.AFAdRevenueData.size());
            String obj4 = sb6.toString();
            StringBuilder sb7 = new StringBuilder();
            sb7.append(str2);
            byte[] AFAdRevenueData = AFa1zSDK.AFAdRevenueData(AFa1zSDK.getMonetizationNetwork(obj4));
            StringBuilder sb8 = new StringBuilder();
            while (r10 < r6) {
            }
            sb7.append(sb8.toString());
            String obj5 = sb7.toString();
            i5 = areAllFieldsValid + 87;
            getRevenue = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            if (i5 % 2 == 0) {
            }
        }
        String str22 = obj;
        try {
            Context context3 = this.getCurrencyIso4217Code;
            Object[] objArr82 = new Object[1];
            a("\u0016\u0010\u000bￕ\u0010\u0015\u001b\f\u0015\u001bￕ\b\n\u001b\u0010\u0016\u0015ￕ￩￨\ufffb\ufffb￬\ufff9\u0000\u0006￪\uffef￨\ufff5￮￬￫\b\u0015\u000b\u0019", 34 - (ViewConfiguration.getZoomControlsTimeout() > j ? 1 : (ViewConfiguration.getZoomControlsTimeout() == j ? 0 : -1)), (ViewConfiguration.getGlobalActionKeyTimeout() > j ? 1 : (ViewConfiguration.getGlobalActionKeyTimeout() == j ? 0 : -1)) + 36, View.combineMeasuredStates(0, 0) + 155, false, objArr82);
            registerReceiver = context3.registerReceiver(null, new IntentFilter(((String) objArr82[0]).intern()));
            i6 = -2700;
            if (registerReceiver != null) {
                areAllFieldsValid = (getRevenue + 47) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                Object[] objArr14 = new Object[1];
                b("⢶鮜\ue044ᚒ⣂Ⳗ蹷㍯\uf46fࠅꬿᒯ醻\ueb49쟷", -TextUtils.lastIndexOf("", '0', 0, 0), objArr14);
                i6 = registerReceiver.getIntExtra(((String) objArr14[0]).intern(), -2700);
            }
            str = this.getCurrencyIso4217Code.getApplicationInfo().nativeLibraryDir;
        } catch (Exception e11) {
            e = e11;
            c6 = '0';
        }
        if (str != null) {
            Object[] objArr15 = new Object[1];
            b("\uf68e㹥\u2e7d筻\uf6f6襲䀕", 1 - Drawable.resolveOpacity(0, 0), objArr15);
            if (str.contains(((String) objArr15[0]).intern())) {
                areAllFieldsValid = (getRevenue + 87) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                i10 = 1;
                Context context22 = this.getCurrencyIso4217Code;
                c6 = '0';
                Throwable th22 = null;
                Object[] objArr92 = new Object[1];
                a("\u0004\u0000\u0003\u0004\ufff6\uffff", (PointF.length(0.0f, 0.0f) > 0.0f ? 1 : (PointF.length(0.0f, 0.0f) == 0.0f ? 0 : -1)) + 3, 6 - (KeyEvent.getMaxKeyCode() >> 16), 177 - TextUtils.indexOf("", "", 0, 0), false, objArr92);
                int size2 = ((SensorManager) context22.getSystemService(((String) objArr92[0]).intern())).getSensorList(-1).size();
                StringBuilder sb62 = new StringBuilder();
                Object[] objArr102 = new Object[1];
                b("ē甉썕敖ű", (AudioTrack.getMaxVolume() > 0.0f ? 1 : (AudioTrack.getMaxVolume() == 0.0f ? 0 : -1)), objArr102);
                sb62.append(((String) objArr102[0]).intern());
                sb62.append(i6);
                Object[] objArr112 = new Object[1];
                a("ￗ)", AndroidCharacter.getMirror('0') - '.', TextUtils.getCapsMode("", 0, 0) + 2, View.MeasureSpec.getSize(0) + 145, false, objArr112);
                sb62.append(((String) objArr112[0]).intern());
                sb62.append(i10);
                Object[] objArr122 = new Object[1];
                b("蕕캷卍\udf3c蕳秫", 1 - (ExpandableListView.getPackedPositionForGroup(0) > j ? 1 : (ExpandableListView.getPackedPositionForGroup(0) == j ? 0 : -1)), objArr122);
                sb62.append(((String) objArr122[0]).intern());
                sb62.append(size2);
                Object[] objArr132 = new Object[1];
                b("\udfe2ஔ催뭍\udfc4볋", 1 - (ViewConfiguration.getMinimumFlingVelocity() >> 16), objArr132);
                sb62.append(((String) objArr132[0]).intern());
                sb62.append(this.AFAdRevenueData.size());
                String obj42 = sb62.toString();
                StringBuilder sb72 = new StringBuilder();
                sb72.append(str22);
                byte[] AFAdRevenueData2 = AFa1zSDK.AFAdRevenueData(AFa1zSDK.getMonetizationNetwork(obj42));
                StringBuilder sb82 = new StringBuilder();
                for (byte b10 : AFAdRevenueData2) {
                    String hexString = Integer.toHexString(b10);
                    if (hexString.length() == 1) {
                        getRevenue = (areAllFieldsValid + 9) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        hexString = "0".concat(hexString);
                    }
                    sb82.append(hexString);
                }
                sb72.append(sb82.toString());
                String obj52 = sb72.toString();
                i5 = areAllFieldsValid + 87;
                getRevenue = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                if (i5 % 2 == 0) {
                    return obj52;
                }
                throw th22;
            }
        }
        i10 = 0;
        Context context222 = this.getCurrencyIso4217Code;
        c6 = '0';
        Throwable th222 = null;
        Object[] objArr922 = new Object[1];
        a("\u0004\u0000\u0003\u0004\ufff6\uffff", (PointF.length(0.0f, 0.0f) > 0.0f ? 1 : (PointF.length(0.0f, 0.0f) == 0.0f ? 0 : -1)) + 3, 6 - (KeyEvent.getMaxKeyCode() >> 16), 177 - TextUtils.indexOf("", "", 0, 0), false, objArr922);
        int size22 = ((SensorManager) context222.getSystemService(((String) objArr922[0]).intern())).getSensorList(-1).size();
        StringBuilder sb622 = new StringBuilder();
        Object[] objArr1022 = new Object[1];
        b("ē甉썕敖ű", (AudioTrack.getMaxVolume() > 0.0f ? 1 : (AudioTrack.getMaxVolume() == 0.0f ? 0 : -1)), objArr1022);
        sb622.append(((String) objArr1022[0]).intern());
        sb622.append(i6);
        Object[] objArr1122 = new Object[1];
        a("ￗ)", AndroidCharacter.getMirror('0') - '.', TextUtils.getCapsMode("", 0, 0) + 2, View.MeasureSpec.getSize(0) + 145, false, objArr1122);
        sb622.append(((String) objArr1122[0]).intern());
        sb622.append(i10);
        Object[] objArr1222 = new Object[1];
        b("蕕캷卍\udf3c蕳秫", 1 - (ExpandableListView.getPackedPositionForGroup(0) > j ? 1 : (ExpandableListView.getPackedPositionForGroup(0) == j ? 0 : -1)), objArr1222);
        sb622.append(((String) objArr1222[0]).intern());
        sb622.append(size22);
        Object[] objArr1322 = new Object[1];
        b("\udfe2ஔ催뭍\udfc4볋", 1 - (ViewConfiguration.getMinimumFlingVelocity() >> 16), objArr1322);
        sb622.append(((String) objArr1322[0]).intern());
        sb622.append(this.AFAdRevenueData.size());
        String obj422 = sb622.toString();
        StringBuilder sb722 = new StringBuilder();
        sb722.append(str22);
        byte[] AFAdRevenueData22 = AFa1zSDK.AFAdRevenueData(AFa1zSDK.getMonetizationNetwork(obj422));
        StringBuilder sb822 = new StringBuilder();
        while (r10 < r6) {
        }
        sb722.append(sb822.toString());
        String obj522 = sb722.toString();
        i5 = areAllFieldsValid + 87;
        getRevenue = i5 % IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (i5 % 2 == 0) {
        }
    }
}
